cmake_minimum_required(VERSION 2.8)

# Options. Turn on with 'cmake -Dmyvarname=ON'.
option(test "Build all tests." ON) # Makes boolean 'test' available.

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_NAME SmallCMakeProjectWithTests)
project(${PROJECT_NAME})

if(WIN32)

else()
  set(CMAKE_CXX_FLAGS "-g -Wall")
endif(WIN32)

# force static runtime libraries for msvc builds
if(MSVC)
  set(variables 
    CMAKE_CXX_FLAGS_DEBUG
    CMAKE_CXX_FLAGS_RELEASE
	CMAKE_CXX_FLAGS_RELWITHDEBINFO
	CMAKE_CXX_FLAGS_MINSIZEREL
  )
  foreach(variable ${variables})
	if(${variable} MATCHES "/MD")
	  string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
	endif()
  endforeach()
endif()

# If you want your own include/ directory, set this, and then you can do
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
# set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
add_subdirectory(HelloWorldWriter)
add_subdirectory(RabinFingerprints)


################################
# Testing
################################
if (test)
  if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
  endif (APPLE)

  # This adds another subdirectory, which has 'project(gtest)'.
  add_subdirectory(lib/third-party/googletest)

  enable_testing()

  # Include the gtest library. gtest_SOURCE_DIR is available due to
  # 'project(gtest)' above.
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

  
  endif()