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

# look-up over all files
file(GLOB_RECURSE A1_BACKYARD_ALL
	"${A1_BACKYARD_SOURCE}/*.h"
	"${A1_BACKYARD_SOURCE}/*.cpp"
	"${A1_BACKYARD_SOURCE}/*.asm"
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
	VS_DEBUGGER_WORKING_DIRECTORY ${A1_BACKYARD_BUILD}/Debug
)
