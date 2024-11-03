# CMake minimum required version
cmake_minimum_required(VERSION 3.10)

# Project name
project(ZipfsLawAnalyzer)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(src)

# Add source files to the project
file(GLOB SOURCES
    src/*.cpp
)

# Create an executable from the source files
add_executable(WordAnalyzer ${SOURCES})

# If you want to include GoogleTest for unit testing, you can do so
# You can uncomment the following lines if you have tests
enable_testing()
add_subdirectory(test)

# Link any libraries if needed (uncomment and add libraries as needed)
# target_link_libraries(WordAnalyzer <your_library>)
