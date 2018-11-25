// codigo_IATA nombre ciudad pais superficie cantidad_terminales destinos_nacionales destinos_internacionales
#include "abb.h"
#include<iostream>

ArbolBinario::ArbolBinario(){
    raiz = NULL;
}

ArbolBinario::ArbolBinario(Nodo *r){
    raiz = r;
}

void ArbolBinario::Praiz(Nodo *r){
    raiz = r;
}

Nodo* ArbolBinario::Oraiz(){
    return raiz;
}

Nodo ArbolBinario::raizArbol(){
    if(raiz)
        return *raiz;
    else
        throw "arbol vacio";
}

bool ArbolBinario::esVacio(){
    return raiz == NULL;
}

Nodo* ArbolBinario::hijoIzq(){
    if(raiz)
        return raiz->subarbolIzq();
    else
        throw "arbol vacio";
}

Nodo* ArbolBinario::hijoDcho(){
    if(raiz)
        return raiz->subarbolDcho();
    else
        throw "arbol vacio";
}

Nodo* ArbolBinario::nuevoArbol(Nodo* ramaIzq, tipodato dato, Nodo* ramaDcho){
    return new Nodo(dato, ramaIzq, ramaDcho);
}
