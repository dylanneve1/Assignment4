cmake_minimum_required(VERSION 3.26)
project(Assignment4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment4 main.cpp
        AlbumCollection.cpp
        AlbumCollection.h
        Album.h
        Album.cpp)
