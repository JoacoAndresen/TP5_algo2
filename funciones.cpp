#include "funciones.h"

int menu(){
    
    int opcion;
    
    std::cout << "1) Consultar" << std::endl;
    std::cout << "2) Dar de alta" << std::endl;
    std::cout << "3) Dar de baja" << std::endl;
    std::cout << "4) Finalizar la sesion" << std::endl;
    
    std::cout << "Elige una opcion: ";
    std::cin >> opcion;
    
    while (opcion <= 0 || opcion >= 5) {
        std::cout << "ERROR, elige una opcion: ";
        std::cin >> opcion;
    }
    
    return opcion;
}

void opcion1(){
    
}

void opcion2(){
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
    
    std::cout << superficie + terminales << std::endl;
}

void opcion3(){
    
}

std::string leerDato(std::ifstream &archivo){
    std::string dato;
    archivo >> dato;
    return dato;
}

void mostrarDatos(std::ifstream &archivo){
    
    std::string codigo = leerDato(archivo);
    std::string nombre = leerDato(archivo);
    std::string ciudad = leerDato(archivo);
    std::string pais = leerDato(archivo);
    float superficie = std::stod(leerDato(archivo));
    int terminales = std::stod(leerDato(archivo));
    int d_nac = std::stod(leerDato(archivo));
    int d_int = std::stod(leerDato(archivo));
    
    std::cout << "Codigo IATA: " << codigo << std::endl;
    std::cout << "Aeropuerto: " << nombre << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;
    std::cout << "Pais: " << pais << std::endl;
    std::cout << "Superficie: " << superficie << std::endl;
    std::cout << "Cantidad de terminales: " << terminales << std::endl;
    std::cout << "Destinos nacionales: " << d_nac << std::endl;
    std::cout << "Destinos internacionales: " << d_int << std::endl;
}
