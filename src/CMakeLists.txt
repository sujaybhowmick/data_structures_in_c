set(LIB_SOURCES
        list/linked_list.c common/utils.c queue/queue.c stack/stack.c tree/tree.c)

set(HEADERS
        list/linked_list.h employee/employee.h queue/queue.h stack/stack.h tree/tree.h)

set(MAIN_SOURCES
        employee/employee.c main.c)

add_library(dsInC STATIC ${LIB_SOURCES} ${HEADERS})
add_executable(main ${HEADERS} ${MAIN_SOURCES})
target_link_libraries(main dsInC)

install(TARGETS dsInC
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/list/linked_list.h DESTINATION include)