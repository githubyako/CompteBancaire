project(comptebancaire)

cmake_minimum_required(VERSION 2.8)

add_executable(comptebancaire fabriquecouple.cpp fabriquesociete.cpp fabriquepersonnephysique.cpp societe.cpp personnephysique.cpp couple.cpp fabriqueproprietaire.cpp proprietaire.cpp main.cpp)

install(TARGETS comptebancaire RUNTIME DESTINATION bin)

add_definitions(-std=c++11)