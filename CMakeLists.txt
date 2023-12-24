cmake_minimum_required(VERSION 3.27)
project(tp_sfsd_2023_2024 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(tp_sfsd_2023_2024
        affichage.c
        affichage.h
        fonction.c
        fonction.h
        machine_abtraite.c
        machine_abtraite.h
        main.c
        variable_globale.c
        variable_globale.h)
