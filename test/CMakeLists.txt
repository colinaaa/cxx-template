include_directories (${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/include)

aux_source_directory(../src SRC)
add_executable (Test main.cc ${SRC})

set_target_properties(Test 
    PROPERTIES OUTPUT_NAME 
    "${CMAKE_SOURCE_DIR}/build/test.out"
)
