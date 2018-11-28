#include "nodo.cpp"

class ArbolBinario{
protected:
    Nodo *raiz;

public:
    // Constructor sin parametros
    // PRE: -
    // POST: Crea un arbol con raiz null.
    ArbolBinario();

    // Constructor
    // PRE: Recibe un puntero a un nodo.
    // POST: Crea el arbol con la raiz que hay en el nodo.
    ArbolBinario(Nodo *r);

    // Metodos

    // PRE: Recibe un puntero a un nodo.
    // POST: Setea la raiz con el valor conseguido en el nodo.
    void Praiz(Nodo *r);

    // PRE: -
    // POST: Devuelve la raiz.
    Nodo* Oraiz();

    // PRE: -
    // POST: Devuelve una raiz si es que hay, y sino imprime "arbol vacio" por pantalla.
    Nodo raizArbol();

    // PRE: -
    // POST: Devuelve la raiz en null.
    bool esVacio();

    // PRE: -
    // POST: Devuelve la raiz del hijo izquierdo, si es que existe.
    Nodo* hijoIzq();

    // PRE: -
    // POST: Devuelve la raiz del hijo derecho, si es que existe.
    Nodo* hijoDcho();

    // PRE: Recibe un puntero a un nodo, un dato, y otro puntero a un nodo.
    // POST: Crea un nodo con los valores ingresados.
    Nodo* nuevoArbol(Nodo* ramaIzq, tipodato dato, Nodo* ramaDcho);

};
