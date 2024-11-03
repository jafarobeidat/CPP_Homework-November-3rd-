cmake_minimum_required(VERSION 3.10)  # or another version that you prefer
project(ZipfsLawAnalyzer)  # Project name

# Add all source files
add_executable(ZipfsLawAnalyzer
    ZipfsLawAnalyzer.cpp
    readBook.cpp
    computeWordFrequency.cpp
    countUniqueWords.cpp
    hapaxLegomenon.cpp
    plotResults.cpp
    sortFrequencies.cpp
)

# Include header directories 
include_directories(${CMAKE_SOURCE_DIR})
