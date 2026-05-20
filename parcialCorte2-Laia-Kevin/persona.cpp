#include  "../include/persona.h"


Persona::Persona(
    std::string nombre,
    std::string documento
) {

    this->nombre = nombre;
    this->documento = documento;
}

std::string Persona::getNombre() {
    return nombre;
}

std::string Persona::getDocumento() {
    return documento;
}

void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setDocumento(std::string documento) {
    this->documento = documento;
}

Persona::~Persona() {
}

