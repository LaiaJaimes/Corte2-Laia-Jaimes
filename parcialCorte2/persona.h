#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class Persona {

protected:
    std::string nombre;
    std::string documento;
public:

    Persona(
        std::string nombre,
        std::string documento
    );

    virtual void mostrarRol() = 0;

    virtual void mostrarInformacion() = 0;

    
    std::string getNombre();

    std::string getDocumento();

