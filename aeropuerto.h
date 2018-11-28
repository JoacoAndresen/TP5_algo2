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
    int ascii;

public:
    //Constructores

    // PRE: Datos validos.
    // POST: Crea el aeropuerto con los datos recibidos.
    Aeropuerto(std::string cod, std::string nom, std::string ciu, std::string pai, float sup, int ter, int dnac, int dint);

    // PRE: -
    // POST: Crea un aeropuerto con todos los datos vacios.
    Aeropuerto();

    //Metodos

    // PRE: -
    // POST: Devuelve una cadena de caracteres que representa el codigo del aeropuerto.
    std::string obtenerCodigo();

    // PRE: -
    // POST: Devuelve una cadena de caracteres que representa el nombre del aeropuerto.
    std::string obtenerNombre();

    // PRE: -
    // POST: Devuelve una cadena de caracteres que representa el nombre de la ciudad.
    std::string obtenerCiudad();

    // PRE: -
    // POST: Devuelve una cadena de caracteres que representa el nombre del pais.
    std::string obtenerPais();

    // PRE: -
    // POST: Devuelve un numero flotante correspondinte a la superficie del aeropuerto.
    float obtenerSuperficie();

    // PRE: -
    // POST: Devuelve un entero correspondiente al numero de terminales que tiene el aeropuerto.
    int obtenerTerminales();

    // PRE: -
    // POST: Devuelve un entero que representa la cantidad de destinos nacionales que tiene el aeropuerto
    int obtenerNacionales();

    // PRE: -
    // POST: Devuelve un entero que representa la cantidad de destinos internacionales que tiene el aeropuerto.
    int obtenerInternacionales();

    // PRE: -
    // POST:
    int obtenerAscii();

    // PRE: Recibe una cadena de caracteres valida.
    // POST: Se modifica el codigo con la cadena de caracteres ingresada.
    void modificarCodigo(std::string cod);

    // PRE: Recibe una cadena de caracteres valida.
    // POST: Se modifica el nombre con la cadena de caracteres ingresada.
    void modificarNombre(std::string nom);

    // PRE: Recibe una cadena de caracteres valida.
    // POST: Se modifica la ciudad con la cadena de caracteres ingresada.
    void modificarCiudad(std::string ciu);

    // PRE: Recibe una cadena de caracteres valida.
    // POST: Se modifica el pais con la cadena de caracteres ingresada.
    void modificarPais(std::string pai);

    // PRE: Recibe una flotante valido.
    // POST: Se modifica la superficie con el numero flotante ingresado.
    void modificarSuperficie(float sup);

    // PRE: Recibe una entero valido.
    // POST: Se modifica la cantidad de terminales con el numero entero ingresado.
    void modificarTerminales(int ter);

    // PRE: Recibe una entero valido.
    // POST: Se modifica el numero de destinos nacionales con el numero entero ingresado.
    void modificarNacionales(int dnac);

    // PRE: Recibe una entero valido.
    // POST: Se modifica el numero de destinos internacionales con el numero entero ingresado.
    void modificarInternacionales(int dint);

    // PRE: -
    // POST: Se imprimen por pantalla todos los campos del aeropuerto leido.
    void mostrarDatos();
};

#endif /* aeropuerto_h */
