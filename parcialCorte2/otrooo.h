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



    void setNombre(std::string nombre);

    void setDocumento(std::string documento);

    virtual ~Persona();
};

#endif



persona cpp

#include "../include/persona.h"

// Constructor

Persona::Persona(
    std::string nombre,
    std::string documento
) {

    this->nombre = nombre;
    this->documento = documento;
}

// GETTERS

std::string Persona::getNombre() {
    return nombre;
}

std::string Persona::getDocumento() {
    return documento;
}

// SETTERS

void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setDocumento(std::string documento) {
    this->documento = documento;
}

// Destructor

Persona::~Persona() {
}