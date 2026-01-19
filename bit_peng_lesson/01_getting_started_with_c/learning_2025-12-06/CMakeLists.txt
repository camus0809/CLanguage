cmake_minimum_required(VERSION 3.23)
project(MyFirstProject)

add_executable(MyFirstProject)

target_sources(MyFirstProject
  PRIVATE 
  01_my_first_project.c
)

