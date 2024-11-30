add_library(sub_project2_maybePrivate)

target_sources(sub_project2_maybePrivate PRIVATE "sub_project2.cpp")

target_sources (sub_project2_maybePrivate  PUBLIC  FILE_SET HEADERS BASE_DIRS . FILES "sub_project2.h")