# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-src")
  file(MAKE_DIRECTORY "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-src")
endif()
file(MAKE_DIRECTORY
  "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-build"
  "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
