cmake_minimum_required(VERSION 3.10)
project(ZipfsLawAnalyzerTests)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

# Include the src directory to find header files
include_directories(${CMAKE_SOURCE_DIR}/../src)

add_executable(all_tests Tests.cpp
    ../src/readBook.cpp
    ../src/computeWordFrequency.cpp
    ../src/countUniqueWords.cpp
    ../src/hapaxLegomenon.cpp
    ../src/sortFrequencies.cpp
    ../src/plotResults.cpp)

target_link_libraries(all_tests gtest gtest_main pthread)

add_test(NAME RunAllTests COMMAND all_tests)
