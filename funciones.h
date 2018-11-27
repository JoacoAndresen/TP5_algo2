#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <typeinfo>
#include "aeropuerto.cpp"

// Funciones auxiliares
int menu();
void opcion1();
void opcion2();
void opcion3();
void opcion4();
void fueraDeRango();
std::string leerDato(std::ifstream &archivo);
void mostrarDatos(std::ifstream &archivo);
Aeropuerto* crearAeropuerto(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);


#endif /* funciones_h */
