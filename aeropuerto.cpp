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
