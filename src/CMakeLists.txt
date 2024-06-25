cmake_minimum_required(VERSION 3.15)

project(TrabalhoFinal)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_executable(main Main.cpp Hotel.cpp Passagem.cpp Produto.cpp Sistema.cpp Cliente.cpp Cliente.hpp Hotel.hpp Location.hpp Passagem.hpp Produto.hpp Sistema.hpp ProductList.txt)