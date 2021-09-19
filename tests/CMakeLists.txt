include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

#set()
#add_executable(check_linked_list ${TEST_SOURCES})
#target_link_libraries(check_linked_list dsInC ${CHECK_LIBRARIES})