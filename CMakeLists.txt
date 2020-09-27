project(A1Backyard)
cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_FLAGS 	"${CMAKE_C_FLAGS} 	-Wall -Wextra -Werror -Wno-missing-braces")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wno-missing-braces")

set(A1_BACKYARD_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")
set(A1_BACKYARD_SOURCE "${A1_BACKYARD_ROOT}/Source")
set(A1_BACKYARD_THIRDPARTY "${A1_BACKYARD_ROOT}/ThirdParty")
set(A1_BACKYARD_BUILD "${A1_BACKYARD_ROOT}/Build")

file(MAKE_DIRECTORY "${A1_BACKYARD_SOURCE}/Generated")
file(TOUCH "${A1_BACKYARD_SOURCE}/Generated/Log.txt")
file(TOUCH "${A1_BACKYARD_SOURCE}/Generated/Generated.inl")

file(GLOB_RECURSE A1_BACKYARD_ALL
	"${A1_BACKYARD_SOURCE}/*.h"
	"${A1_BACKYARD_SOURCE}/*.cpp"
	"${A1_BACKYARD_SOURCE}/*.asm"
	"${A1_BACKYARD_SOURCE}/*.inl"
	"${A1_BACKYARD_SOURCE}/*.txt"
	"${A1_BUILD}/*.natvis"
)

include_directories( ${A1_BACKYARD_SOURCE} )

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${A1_COOKED_BUILD}")

add_executable(A1Backyard
	${A1_BACKYARD_ALL}
)

target_include_directories(A1Backyard INTERFACE ${A1_BACKYARD_SOURCE} )

target_link_libraries(A1Backyard
	A1Utility
)
