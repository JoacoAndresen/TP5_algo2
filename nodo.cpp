#include "nodo.h"
#include<iostream>

Nodo::Nodo(tipodato valor){
    dato = valor;
    izq = dcho = NULL;
}

Nodo::Nodo(tipodato valor, Nodo* ramaIzq, Nodo* ramaDcho){
    dato = valor;
    izq = ramaIzq;
    dcho = ramaDcho;
}

tipodato Nodo::valorNodo(){
    return dato;
}

Nodo* Nodo::subarbolIzq(){
    return izq;
}

Nodo* Nodo::subarbolDcho(){
    return dcho;
}

void Nodo::nuevoValor(tipodato d){
    dato = d;
}

void Nodo::ramaIzq(Nodo* n){
    izq = n;
}

void Nodo::ramaDcho(Nodo* n){
    dcho = n;
}
