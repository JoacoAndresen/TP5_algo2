#include "funciones.h"

int main(){
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Algoritmos y Programación II/TP5/TP5/aeropuertos.txt");
    
    int longitud = longitudArchivo(archivo) - 1;
    
    for (int i = 0; i<longitud; i++) {
        crearAeropuerto(archivo)->mostrarDatos();
        std::cout << std::endl;
    }
    
    archivo.close();
    
    return 0;
}
