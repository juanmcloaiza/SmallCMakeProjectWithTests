################################
# Normal Libraries & Executables
################################
add_library(HelloWorldWriter_lib HelloWorldWriter.cpp)
add_executable(HelloWorldWriter main.cpp)
# Key idea: SEPARATE OUT your main() function into its own file so it can be its
# own executable. Separating out main() means you can add this library to be
# used elsewhere.

target_link_libraries(HelloWorldWriter HelloWorldWriter_lib)

##############
# Unit Tests
##############
if(test)
	enable_testing()
	add_executable(test_setToOne test_setToOne.cpp)

	# Standard linking to gtest stuff.
	target_link_libraries(test_setToOne gtest gtest_main)

	# Extra linking for the project.
	target_link_libraries(test_setToOne HelloWorldWriter_lib)

	# This is so you can do 'make test' to see all your tests run, instead of
	# manually running the executable runUnitTests to see those specific tests.
	add_test(test1 test_setToOne)

	add_executable(test_setToZero test_setToZero.cpp)
	target_link_libraries(test_setToZero gtest gtest_main)
	target_link_libraries(test_setToZero HelloWorldWriter_lib)
	add_test(test0 test_setToZero)

	add_executable(test_setToTwo test_setToTwo.cpp)
	target_link_libraries(test_setToTwo gtest gtest_main)
	target_link_libraries(test_setToTwo HelloWorldWriter_lib)
	add_test(test2 test_setToTwo)
	
	add_executable(test_Alltogether test_Alltogether.cpp)
	target_link_libraries(test_Alltogether gtest gtest_main)
	target_link_libraries(test_Alltogether HelloWorldWriter_lib)
	add_test(test3 test_Alltogether)


endif(test)