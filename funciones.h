#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <typeinfo>
#include "aeropuerto.h"
#include "arbol.h"

// Funciones auxiliares

// PRE: Recibe un puntero a un arbol existente.
// POST: Imprime por pantalla las diferentes opciones que tiene el usuario para navegar por el programa.
void menu(BinarySearchTree<int>* arbol);

// PRE: Recibe un puntero a un arbol existente.
// POST: Muestra por pantalla los datos del aeropuerto solicitado.
void opcion1(BinarySearchTree<int>* arbol);

// PRE: Recibe un puntero a un arbol existente.
// POST: Pide al usuario que ingrese los datos del nuevo aeropuerto, y lo agrega al arbol.
void opcion2(BinarySearchTree<int>* arbol);

// PRE: Recibe un puntero a un arbol existente.
// POST: Pide al usuario el codigo IATA del aeropuerto a eliminar, y lo quita del arbol.
void opcion3(BinarySearchTree<int>* arbol);

// PRE: Recibe un puntero a un arbol existente.
// POST: Termina el programa. Se libera la memoria dinamica ocupada por el arbol.
void opcion4(BinarySearchTree<int>* arbol);

// PRE: Recibe un puntero a un arbol existente.
// POST: Solicita al usuario ingresar nuevamente un numero, correspondiente a una opcion valida.
void fueraDeRango(BinarySearchTree<int>* arbol);

// PRE: Recibe por referencia el archivo que se desea leer.
// POST: Devuelve el dato leido.
std::string leerDato(std::ifstream &archivo);

// PRE: Recibe por referencia el archivo que se desea leer.
// POST: Crea un nuevo aeropuerto con los campos leidos del dato.
Aeropuerto* crearAeropuerto(std::ifstream &archivo);

// PRE: Recibe por referencia el archivo que se desea leer.
// POST: Devuelve un entero que es la longitud del archivo.
int longitudArchivo(std::ifstream &archivo);

// PRE: Recibe una cadena de caracteres valida.
// POST: Devuelve un entero que representa la cadena de caracteres ingresada.
int calcularAscii(std::string codigo);


#endif /* funciones_h */
