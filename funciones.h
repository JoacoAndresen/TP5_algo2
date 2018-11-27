#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <typeinfo>
#include "aeropuerto.h"
#include "arbol.h"

// Funciones auxiliares
void menu(BinarySearchTree<int>* arbol);
void opcion1(BinarySearchTree<int>* arbol);
void opcion2(BinarySearchTree<int>* arbol);
void opcion3(BinarySearchTree<int>* arbol);
void opcion4(BinarySearchTree<int>* arbol);
void fueraDeRango(BinarySearchTree<int>* arbol);
std::string leerDato(std::ifstream &archivo);
void mostrarDatos(std::ifstream &archivo);
Aeropuerto* crearAeropuerto(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);
int calcularAscii(std::string codigo);


#endif /* funciones_h */
