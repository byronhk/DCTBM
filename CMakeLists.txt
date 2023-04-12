cmake_minimum_required(VERSION 3.0.0)
project(DCTBM VERSION 0.1.0)


include(CTest)
enable_testing()
set(CMAKE_DL_LIBS -ldl)



include_directories(${CMAKE_SOURCE_DIR}/inc)

link_directories(${CMAKE_SOURCE_DIR}/lib)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)


add_executable(DCTBM ./src/main.cpp inc/MultiCardCPP.h)


target_include_directories(${PROJECT_NAME}  PRIVATE include/)

target_link_libraries(${PROJECT_NAME} dl)
target_link_libraries(${PROJECT_NAME} libMultiCardCPP.so)


