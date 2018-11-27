#include "funciones.h"
#include "arbol.h"

int main(){
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Algoritmos y Programación II/TP5/TP5/aeropuertos.txt");
    
    int longitud = longitudArchivo(archivo) - 1;
    
    Aeropuerto* raiz = crearAeropuerto(archivo);
    
    BinarySearchTree<int>* arbol = new BinarySearchTree<int>(raiz->obtenerAscii(), raiz);
    
    for (int i = 1; i<longitud; i++) {
        Aeropuerto* a = crearAeropuerto(archivo);
        arbol->insert(a->obtenerAscii(), a);
    }
    
    archivo.close();
    
    menu(arbol);
    
    return 0;
}
