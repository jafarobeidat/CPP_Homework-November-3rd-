# CMake generated Testfile for 
# Source directory: C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/test
# Build directory: C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(RunAllTests "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/build/test/all_tests.exe")
set_tests_properties(RunAllTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/test/CMakeLists.txt;28;add_test;C:/Users/ThinkBook/OneDrive/Desktop/School/Y3S1/Computer Programming/Session 17/test/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
