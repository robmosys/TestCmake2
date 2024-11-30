# If "sub_project1_maybePrivate" was defined in other sub-directory, this is a collision.
# But the targets defined in parent directory, or in this directory ar not visible in scope
add_library(sub_project2_maybePrivate)

target_sources(sub_project2_maybePrivate PRIVATE "sub_project2.cpp")

target_sources (sub_project2_maybePrivate  PUBLIC  FILE_SET HEADERS BASE_DIRS . FILES "sub_project2.h")