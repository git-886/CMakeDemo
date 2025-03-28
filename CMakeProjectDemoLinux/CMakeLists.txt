include_directories ("libnn")
set (NN_SRC_FILTER "./libnn/*.h" "./libnn/*.cpp")
file (GLOB_RECURSE NN_SRC ${NN_SRC_FILTER})
add_library (nn SHARED ${NN_SRC})
target_compile_definitions (nn PRIVATE -D NN_APIEXPORT)



set (NETWORK_SRC_FILTER "./network/*.h" "./network/*.cpp")
file (GLOB_RECURSE NERWORK_SRC ${NETWORK_SRC_FILTER})
add_executable (network ${NERWORK_SRC})

target_link_libraries (network PRIVATE nn)

