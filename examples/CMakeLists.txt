add_executable(RPC.example RPC.cpp)
target_link_libraries(RPC.example PRIVATE RPCSim::RPCSim)
file(COPY_FILE "${CMAKE_CURRENT_SOURCE_DIR}/gas_files/c2h2f4_ic4h10_sf6.gas" "${CMAKE_CURRENT_BINARY_DIR}/c2h2f4_ic4h10_sf6.gas")