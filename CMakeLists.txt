cmake_minimum_required (VERSION 3.13)

project("TestDebugging")

add_executable(TestDebugging)

add_subdirectory(sub_project1)
add_subdirectory(sub_project2)


target_sources (TestDebugging PRIVATE "main.cpp")

# This works:
#  Now it's oftern recommended to use aliases instead.
#  Why?
target_link_libraries(TestDebugging sub_project2_maybePrivate sub_project1_maybePrivate)
#target_link_libraries(TestDebugging sub_project1::instance  sub_project2::instance)
