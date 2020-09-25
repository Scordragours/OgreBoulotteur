cmake_minimum_required(VERSION 3.17)
project(OgreBoulotteur C)

set(CMAKE_C_STANDARD 99)

add_executable(OgreBoulotteur main.c foret.h foret.c enfant.h ogreBoulotteur.h enfant.c)