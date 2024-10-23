include(GNUInstallDirs)

set(HEED_DATABASE_PATH "${garfield++_SOURCE_DIR}/Heed/heed++/database")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/DefaultFolders.hpp.in" "${PROJECT_BINARY_DIR}/include/RPCSim/DefaultFolders.hpp" @ONLY)
set(HEED_DATABASE_PATH "${CMAKE_INSTALL_FULL_DATAROOTDIR}/Heed/database")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/DefaultFolders.hpp.in" "${PROJECT_BINARY_DIR}/install/RPCSim/DefaultFolders.hpp" @ONLY)
add_library(RPCSim SHARED SetupDatabaseDir.cpp)
target_include_directories(RPCSim PRIVATE $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include> PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)
target_link_libraries(RPCSim INTERFACE Garfield::Garfield)

add_library(RPCSim::RPCSim ALIAS RPCSim)
install(FILES "${PROJECT_BINARY_DIR}/install/RPCSim/DefaultFolders.hpp" DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/RPCSim")