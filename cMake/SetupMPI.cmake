function(ConfigureMPI TARGET)
  find_package(MPI REQUIRED)
  IF(MPI_FOUND)
    message(STATUS "Found MPI: ${MPI_LIBRARIES}")
  TARGET_INCLUDE_DIRECTORIES(${TARGET} PUBLIC ${MPI_INCLUDE_PATH})
  TARGET_LINK_LIBRARIES(${TARGET} PUBLIC ${MPI_LIBRARIES})
  ELSE(MPI_FOUND)
    message(WARNING "MPI not found")
  ENDIF(MPI_FOUND)
endfunction(ConfigureMPI)