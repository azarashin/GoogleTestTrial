cmake_minimum_required(VERSION 3.0.0)
project(google_test_trial VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_subdirectory(googletest)

file(GLOB_RECURSE google_test_trial_SRC "src/*.cpp" "test/*.cpp")

set(google_test_trial_HEADERS
)

set(google_test_trial_INCLUDE_DIRS
  googletest/googletest/include
  include
)

set(google_test_trial_LIB_DIRS
  build/lib
)


add_executable(google_test_trial ${google_test_trial_SRC} ${google_test_trial_HEADERS})

target_include_directories(google_test_trial
  PUBLIC ${google_test_trial_INCLUDE_DIRS}
)

target_link_directories(google_test_trial
  PUBLIC ${google_test_trial_LIB_DIRS}
)

target_link_libraries(google_test_trial 
  gmock_main gmock gtest_main gtest)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
