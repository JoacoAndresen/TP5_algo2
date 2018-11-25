#include "funciones.h"

int main(){
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Algoritmos y Programación II/TP5/TP5/aeropuertos.txt");
    
    //mostrarDatos(archivo);
    opcion2();
    archivo.close();
    
    return 0;
}
