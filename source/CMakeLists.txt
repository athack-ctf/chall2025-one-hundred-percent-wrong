cmake_minimum_required(VERSION 3.27)

project(one-hundred-percent-wrong C)

# Making sure to use GLIBC
if (NOT CMAKE_COMPILER_IS_GNUCC)
    message(FATAL_ERROR "Glibc not found. Aborting.")
endif()

# Set build type to Release
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Disable PIE (Position Independent Executable) to prevent ASLR
set(CMAKE_POSITION_INDEPENDENT_CODE OFF)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -no-pie")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-pic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-pic")

# Disable compiler optimizations (optional, based on your configuration)
set(CMAKE_C_FLAGS_RELEASE "-O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O0")

# Disable debugging symbols
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")

# Setting CMAKE_C_STANDARD
set(CMAKE_C_STANDARD 11)

# Add first executable version (with USE_DUMMY_FLAG)
add_executable(one-hundred-percent-wrong-using-dummy-flag code/one-hundred-percent-wrong.c)
target_compile_definitions(one-hundred-percent-wrong-using-dummy-flag PRIVATE USE_DUMMY_FLAG)

# Add second executable version (with USE_REAL_FLAG)
add_executable(one-hundred-percent-wrong code/one-hundred-percent-wrong.c)
target_compile_definitions(one-hundred-percent-wrong PRIVATE USE_REAL_FLAG)