# CMake generated Testfile for 
# Source directory: E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test
# Build directory: E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[LastTaskTests]=] "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/build/test/Debug/LastTaskTests.exe")
  set_tests_properties([=[LastTaskTests]=] PROPERTIES  _BACKTRACE_TRIPLES "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;15;add_test;E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[LastTaskTests]=] "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/build/test/Release/LastTaskTests.exe")
  set_tests_properties([=[LastTaskTests]=] PROPERTIES  _BACKTRACE_TRIPLES "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;15;add_test;E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[LastTaskTests]=] "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/build/test/MinSizeRel/LastTaskTests.exe")
  set_tests_properties([=[LastTaskTests]=] PROPERTIES  _BACKTRACE_TRIPLES "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;15;add_test;E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[LastTaskTests]=] "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/build/test/RelWithDebInfo/LastTaskTests.exe")
  set_tests_properties([=[LastTaskTests]=] PROPERTIES  _BACKTRACE_TRIPLES "E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;15;add_test;E:/Kuliah/Elektro/Semester 4/PMC/Semester ganjil/Last Task/test/CMakeLists.txt;0;")
else()
  add_test([=[LastTaskTests]=] NOT_AVAILABLE)
endif()
