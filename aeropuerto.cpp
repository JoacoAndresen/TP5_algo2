#include "aeropuerto.h"

Aeropuerto::Aeropuerto(std::string cod, std::string nom, std::string ciu, std::string pai, float sup, int ter, int dnac, int dint){
    codigo = cod;
    nombre = nom;
    ciudad = ciu;
    pais = pai;
    superficie = sup;
    terminales = ter;
    d_nac = dnac;
    d_int = dint;
}

Aeropuerto::Aeropuerto(){
    codigo = "";
    nombre = "";
    ciudad = "";
    pais = "";
    superficie = 0;
    terminales = 0;
    d_nac = 0;
    d_int = 0;
}

std::string Aeropuerto::mostrarCodigo(){
    return codigo;
}

std::string Aeropuerto::mostrarNombre(){
    return nombre;
}

std::string Aeropuerto::mostrarPais(){
    return pais;
}

std::string Aeropuerto::mostrarCiudad(){
    return ciudad;
}

float Aeropuerto::mostrarSuperficie(){
    return superficie;
}

int Aeropuerto::mostrarTerminales(){
    return terminales;
}

int Aeropuerto::mostrarNacionales(){
    return d_nac;
}

int Aeropuerto::mostrarInternacionales(){
    return d_int;
}

void Aeropuerto::modificarCodigo(std::string cod){
    codigo = cod;
}

void Aeropuerto::modificarNombre(std::string nom){
    nombre = nom;
}

void Aeropuerto::modificarCiudad(std::string ciu){
    ciudad = ciu;
}

void Aeropuerto::modificarPais(std::string pai){
    pais = pai;
}

void Aeropuerto::modificarSuperficie(float sup){
    superficie = sup;
}

void Aeropuerto::modificarTerminales(int ter){
    terminales = ter;
}

void Aeropuerto::modificarNacionales(int dnac){
    d_nac = dnac;
}

void Aeropuerto::modificarInternacionales(int dint){
    d_int = dint;
}

void Aeropuerto::mostrarDatos(){
    std::cout << "Codigo IATA: " << codigo << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;
    std::cout << "Pais: " << pais << std::endl;
    std::cout << "Superficie: " << superficie << std::endl;
    std::cout << "Cantidad de terminales: " << terminales << std::endl;
    std::cout << "Destinos nacionales: " << d_nac << std::endl;
    std::cout << "Destinos internacionales: " << d_int << std::endl;
}
