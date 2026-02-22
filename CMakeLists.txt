cmake_minimum_required(VERSION 3.20)
project(embedded_lab C)

set(CMAKE_C_STANDARD 11)

# Añadimos el include global
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Archivos de aplicación
set(APP_SOURCES
    src/main.c
    platform/posix/app_log_posix.c
)

add_executable(embedded_lab_app ${APP_SOURCES})