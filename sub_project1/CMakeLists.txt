add_library(sub_project1_maybePrivate)

target_sources(sub_project1_maybePrivate PRIVATE "sub_project1.cpp")

target_sources (sub_project1_maybePrivate  PUBLIC  FILE_SET HEADERS BASE_DIRS . FILES "sub_project1.h")