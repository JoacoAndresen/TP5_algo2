#include "nodo.cpp"

class ArbolBinario{
protected:
    Nodo *raiz;

public:
    // Constructor sin parametros
    ArbolBinario();

    // Constructor
    ArbolBinario(Nodo *r);

    void Praiz(Nodo *r);

    Nodo* Oraiz();

    Nodo raizArbol();

    bool esVacio();

    Nodo* hijoIzq();

    Nodo* hijoDcho();

    Nodo* nuevoArbol(Nodo* ramaIzq, tipodato dato, Nodo* ramaDcho);

};