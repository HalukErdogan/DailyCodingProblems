add_executable(
  tests
  test_670.cpp
)
target_link_libraries(
  tests
  solutions
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)