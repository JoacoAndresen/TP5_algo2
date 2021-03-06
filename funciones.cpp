#include "funciones.h"

void menu(BinarySearchTree<int>* arbol){
    
    int opcion;
    
    std::cout << "1) Consultar" << std::endl;
    std::cout << "2) Dar de alta" << std::endl;
    std::cout << "3) Dar de baja" << std::endl;
    std::cout << "4) Finalizar la sesion" << std::endl;
    
    std::cout << "Elige una opcion: ";
    std::cin >> opcion;
    
    switch(opcion){
        case 1: opcion1(arbol); break;
        case 2: opcion2(arbol); break;
        case 3: opcion3(arbol); break;
        case 4: opcion4(arbol); break;
        default: fueraDeRango(arbol); break;
    }
}

void opcion1(BinarySearchTree<int>* arbol){
    std::string codigo;
    std::cout << "Introduzca el codigo IATA: ";
    std::cin >> codigo;
    
    int ascii = calcularAscii(codigo);
    
    arbol->search(arbol->begin(),ascii)->getAep()->mostrarDatos();
    
    menu(arbol);
    
}

void opcion2(BinarySearchTree<int>* arbol){
    std::string codigo;
    std::string nombre;
    std::string ciudad;
    std::string pais;
    float superficie;
    int terminales;
    int d_nac;
    int d_int;
    
    std::cout << "Ingrese los siguientes datos: " << std::endl;
    std::cout << "Codigo IATA: ";
    std::cin >> codigo;
    std::cout << "Aeropuerto: ";
    std::cin >> nombre;
    std::cout << "Ciudad: ";
    std::cin >> ciudad;
    std::cout << "Pais: ";
    std::cin >> pais;
    std::cout << "Superficie: ";
    std::cin >> superficie;
    std::cout << "Cantidad de terminales: ";
    std::cin >> terminales;
    std::cout << "Destinos nacionales: ";
    std::cin >> d_nac;
    std::cout << "Destinos internacionales: ";
    std::cin >> d_int;
    
    Aeropuerto* a = new Aeropuerto(codigo, nombre, ciudad, pais, superficie, terminales, d_nac, d_int);
    
    arbol->insert(a->obtenerAscii(), a);
    
    menu(arbol);
}

void opcion3(BinarySearchTree<int>* arbol){
    std::string codigo;
    std::cout << "Introduzca el codigo IATA del aeropuerto que desea eliminar: ";
    std::cin >> codigo;
    
    int ascii = calcularAscii(codigo);
    
    arbol->remove(arbol->begin(), ascii);
    
    menu(arbol);
}

void opcion4(BinarySearchTree<int>* arbol){
    std::cout << std::endl << "SESION FINALIZADA" << std::endl;
    
    delete arbol;
}

void fueraDeRango(BinarySearchTree<int>* arbol){
    std::cout << std::endl << "ERROR! Ingrese una opcion valida." << std::endl;
    menu(arbol);
}

std::string leerDato(std::ifstream &archivo){
    std::string dato;
    archivo >> dato;
    return dato;
}

Aeropuerto* crearAeropuerto(std::ifstream &archivo){
    
    std::string codigo = leerDato(archivo);
    std::string nombre = leerDato(archivo);
    std::string ciudad = leerDato(archivo);
    std::string pais = leerDato(archivo);
    float superficie = std::stod(leerDato(archivo));
    int terminales = std::stod(leerDato(archivo));
    int d_nac = std::stod(leerDato(archivo));
    int d_int = std::stod(leerDato(archivo));
    
    Aeropuerto* a = new Aeropuerto(codigo, nombre, ciudad, pais, superficie, terminales, d_nac, d_int);
    
    return a;
    
}

int longitudArchivo(std::ifstream &archivo){
    std::string linea;
    int longitud = 0;
    while (!archivo.eof()) {
        getline(archivo, linea);
        longitud++;
    }
    archivo.clear();
    archivo.seekg(0);
    return longitud;
}

int calcularAscii(std::string codigo){
    int entero = 0;
    entero = (codigo[0]*codigo[0]*codigo[0]) + codigo[1] + codigo[2];
    
    return entero;
}
