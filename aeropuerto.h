#ifndef aeropuerto_h
#define aeropuerto_h
#include <string>

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
};

#endif /* aeropuerto_h */
