#ifndef aeropuerto_h
#define aeropuerto_h
#include <string>
#include <iostream>

class Aeropuerto{
private:
    std::string codigo;
    std::string nombre;
    std::string ciudad;
    std::string pais;
    float superficie;
    int terminales;
    int d_nac;
    int d_int;
    
public:
    //Constructores
    Aeropuerto(std::string cod, std::string nom, std::string ciu, std::string pai, float sup, int ter, int dnac, int dint);
    Aeropuerto();
    
    //Metodos
    std::string mostrarCodigo();
    std::string mostrarNombre();
    std::string mostrarCiudad();
    std::string mostrarPais();
    float mostrarSuperficie();
    int mostrarTerminales();
    int mostrarNacionales();
    int mostrarInternacionales();
    
    void modificarCodigo(std::string cod);
    void modificarNombre(std::string nom);
    void modificarCiudad(std::string ciu);
    void modificarPais(std::string pai);
    void modificarSuperficie(float sup);
    void modificarTerminales(int ter);
    void modificarNacionales(int dnac);
    void modificarInternacionales(int dint);
    
    void mostrarDatos();
};

#endif /* aeropuerto_h */
