cmake_minimum_required(VERSION 3.27)
project(TP_SFSD_2023_KERMI C)

set(CMAKE_C_STANDARD 90)

add_executable(TP_SFSD_2023_KERMI main.c
        fonction.c
        fonction.h
        machine_abtraite.c
        machine_abtraite.h
        variable_globale.c
        variable_globale.h
        affichage.c
        affichage.h)
