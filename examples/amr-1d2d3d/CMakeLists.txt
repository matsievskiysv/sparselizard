option(BUILD_AMR_1D2D3D "Build example AMR_1D2D3D." OFF)
if(BUILD_AMR_1D2D3D OR BUILD_ALL_EXAMPLES)
  custom_add_executable_from_dir(AMR_1D2D3D ${CMAKE_CURRENT_SOURCE_DIR})
  target_link_libraries(AMR_1D2D3D sparselizard)
  custom_copy_file(AMR_1D2D3D ${CMAKE_CURRENT_SOURCE_DIR} "*.msh;*.geo")
endif(BUILD_AMR_1D2D3D OR BUILD_ALL_EXAMPLES)
