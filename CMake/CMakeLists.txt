project(A1Backyard)
cmake_minimum_required(VERSION 3.8)
set_property( GLOBAL PROPERTY USE_FOLDERS ON )

set(C_FLAGS_WARNINGS "")
if(MSVC)
  set(C_FLAGS_WARNINGS "/W4 /WX")
elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX OR
       CMAKE_COMPILER_IS_CLANGXX)
  # Set the maximum warning level for gcc.
  set(C_FLAGS_WARNINGS "-Wall -Werror -Wno-long-long -Wno-variadic-macros")
endif()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${C_FLAGS_WARNINGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${C_FLAGS_WARNINGS}")

set(A1_BACKYARD_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")
set(A1_BACKYARD_SOURCE "${A1_BACKYARD_ROOT}/Source")
set(A1_BACKYARD_THIRDPARTY "${A1_BACKYARD_ROOT}/ThirdParty")
set(A1_BACKYARD_BUILD "${A1_BACKYARD_ROOT}/Build")

include_directories( ${A1_BACKYARD_SOURCE} )

file(MAKE_DIRECTORY "${A1_BACKYARD_SOURCE}/Generated")
file(TOUCH "${A1_BACKYARD_SOURCE}/Generated/Debug.txt")
file(TOUCH "${A1_BACKYARD_SOURCE}/Generated/SerializationUtility.gen.inl")

# look-up over all files
file(GLOB_RECURSE A1_BACKYARD_ALL
	"${A1_BACKYARD_SOURCE}/*.h"
	"${A1_BACKYARD_SOURCE}/*.cpp"
	"${A1_BACKYARD_SOURCE}/*.asm"
	"${A1_BACKYARD_SOURCE}/*.inl"
	"${A1_BACKYARD_SOURCE}/*.txt"
)

macro(GroupSources InRoot InCurrentDirectory)
	file(GLOB Children RELATIVE "${InRoot}/${InCurrentDirectory}" "${InRoot}/${InCurrentDirectory}/*")
	foreach(Child ${Children})
		if(IS_DIRECTORY ${InRoot}/${InCurrentDirectory}/${Child})
			GroupSources("${InRoot}" "${InCurrentDirectory}/${Child}")
		else()
			string(REPLACE "/" "\\" GroupName ${InCurrentDirectory})
            string(REPLACE "Source" "" GroupName ${GroupName})
            source_group(${GroupName} FILES ${InRoot}/${InCurrentDirectory}/${Child})
        endif()
	endforeach()
endmacro()
# Execute the macro
GroupSources("${A1_BACKYARD_ROOT}" "Source")

add_executable(A1Backyard
	${A1_BACKYARD_ALL}
)
target_link_libraries(A1Backyard
A1Utility
)

set_target_properties(A1Backyard PROPERTIES
	ENABLE_EXPORTS 0
	RUNTIME_OUTPUT_DIRECTORY ${A1_BACKYARD_BUILD}
	VS_DEBUGGER_WORKING_DIRECTORY ${A1_BACKYARD_BUILD}
)

add_custom_target(
	CodeGenBackyard ALL
	DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/Code Generation for Backyard"
	)

if(WIN32)
	if(NOT EXISTS ${A1_BACKYARD_BUILD}/libcrypto-1_1-x64.dll)
		file(COPY ${A1_THIRDPARTY}/OpenSSL/bin/libcrypto-1_1-x64.dll DESTINATION ${A1_BACKYARD_BUILD})
	endif()
	if(NOT EXISTS ${A1_BACKYARD_BUILD}/Debug/icuuc64.dll)
		file(COPY ${A1_THIRDPARTY}/A1Utility/ThirdParty/icu/binWin64/icuuc64.dll DESTINATION ${A1_BACKYARD_BUILD})
	endif()
	if(NOT EXISTS ${A1_BACKYARD_BUILD}/Debug/icudt64.dll)
		file(COPY ${A1_THIRDPARTY}/A1Utility/ThirdParty/icu/binWin64/icudt64.dll DESTINATION ${A1_BACKYARD_BUILD})
	endif()
endif()

set(LinkedTargets A1Backyard A1Utility) 
 
set(includePaths "")

# message("Iterating linked targets: ${LinkedTargets}")
foreach(Target ${LinkedTargets})
	get_target_property(dirs ${Target} INCLUDE_DIRECTORIES)
	if(dirs)
		# message("includes of target ${Target} are: ${dirs}")
		foreach(dir ${dirs})
			# message("include found: ${dir}")
			list(APPEND includePaths ${dir})
		endforeach()
	endif()
endforeach()

find_package(WindowsSDK REQUIRED)
message("WinSDK found: ${WINDOWSSDK_LATEST_DIR}")
get_windowssdk_include_dirs(${WINDOWSSDK_LATEST_DIR} winsdk_dirs)
foreach(dir ${winsdk_dirs})
	#if(NOT dir MATCHES ".*/ucrt.*")
		# message("WinSDK include found: ${dir}")
		list(APPEND includePaths ${dir})
	#endif()
endforeach()

set(CodeGenArgs "")
foreach(dir ${includePaths})
	# message("Include: ${dir}")
	set(CodeGenArgs "${CodeGenArgs} \"${dir}\"")
endforeach()
# message(${CodeGenArgs})

add_custom_command( 
	OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/Code Generation for Backyard"
	COMMAND "$<TARGET_FILE:A1CodeGen>" "${A1_BACKYARD_SOURCE}/Native/Main.cpp" "${A1_BACKYARD_SOURCE}" "${A1_BACKYARD_SOURCE}/Generated" "Backyard" "${CodeGenArgs}"
	# MAIN_DEPENDENCY ${ARG_FILE}
	COMMENT "Generating Code for A1Backyard"
	WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

message("A1Backyard code gen args:")
message("${A1_BACKYARD_SOURCE}/Native/Main.cpp ${A1_BACKYARD_SOURCE}/Generated ${CodeGenArgs}")
