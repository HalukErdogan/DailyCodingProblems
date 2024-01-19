add_executable(
  tests
  test_670.cpp
  test_674.cpp
  test_678.cpp
)
target_link_libraries(
  tests
  solutions
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)