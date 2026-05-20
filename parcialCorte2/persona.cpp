#include  "../include/persona.h"


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