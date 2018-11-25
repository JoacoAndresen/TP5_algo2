#include<string>
typedef std::string tipodato;

class Nodo{
protected:
    tipodato dato;
    Nodo *izq;
    Nodo *dcho;
    
public:
    // Constructor 1
    Nodo(tipodato valor);
    // Constructor 2
    Nodo(tipodato valor, Nodo* ramaIzq, Nodo* ramaDcho);
    
    // Funciones de acceso
    tipodato valorNodo();
    
    Nodo* subarbolIzq();
    
    Nodo* subarbolDcho();
    
    // Funciones de modificacion
    void nuevoValor(tipodato d);
    
    void ramaIzq(Nodo* n);
    
    void ramaDcho(Nodo* n);
};
