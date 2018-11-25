#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <typeinfo>

// Funciones auxiliares
int menu();
void opcion1();
void opcion2();
void opcion3();
void opcion4();
std::string leerDato(std::ifstream &archivo);
void mostrarDatos(std::ifstream &archivo);

#endif /* funciones_h */
