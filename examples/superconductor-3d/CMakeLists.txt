option(BUILD_SUPERCONDUCTOR_3D "Build example SUPERCONDUCTOR_3D." OFF)
if(BUILD_SUPERCONDUCTOR_3D OR BUILD_ALL_EXAMPLES)
  custom_add_executable_from_dir(SUPERCONDUCTOR_3D ${CMAKE_CURRENT_SOURCE_DIR})
  target_link_libraries(SUPERCONDUCTOR_3D sparselizard)
  custom_copy_file(SUPERCONDUCTOR_3D ${CMAKE_CURRENT_SOURCE_DIR} "*.msh;*.geo")
endif(BUILD_SUPERCONDUCTOR_3D OR BUILD_ALL_EXAMPLES)
