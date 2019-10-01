include_directories (${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/include)

add_executable (Test main.cc)

find_package(Catch2 REQUIRED)

target_link_libraries(Test Catch2::Catch2 gsl src bar)

set_target_properties(Test 
    PROPERTIES OUTPUT_NAME 
    "${CMAKE_SOURCE_DIR}/build/test.out"
)

include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(Test)