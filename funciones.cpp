#include "funciones.h"

int menu(){

    int opcion;

    std::cout << "1) Consultar" << std::endl;
    std::cout << "2) Dar de alta" << std::endl;
    std::cout << "3) Dar de baja" << std::endl;
    std::cout << "4) Finalizar la sesion" << std::endl;

    std::cout << "Elige una opcion: ";
    std::cin >> opcion;

    switch(opcion){
        case 1: opcion1(); break;
        case 2: opcion2(); break;
        case 3: opcion3(); break;
        case 4: opcion4(); break;
        default: fueraDeRango(); break;
    }
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

}

void opcion3(){

}

void opcion4(){
    std::cout << std::endl << "SESION FINALIZADA" << std::endl;
}

void fueraDeRango(){
    std::cout << std::endl << "ERROR! Ingrese una opcion valida." << std::endl;
    menu();
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
