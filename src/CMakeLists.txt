include_directories (${CMAKE_SOURCE_DIR}/include)
aux_source_directory(. Src)
add_library(src SHARED ${Src}) 

add_subdirectory(bar)