#include <iostream>
#include <string>
#include <cstdio>
#include "persona.h"

Persona::Persona(
    std::string nombre,
    std::string apellido,
    int edad,
    std::string documento
) {
     this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->documento = documento;
}

Persona::Persona() {
}

std::string Persona::getNombre() {
    return nombre;
}

std::string Persona::getApellido() {
    return apellido;
}

int Persona::getEdad() {
    return edad;
}

std::string Persona::getDocumento() {
    return documento;
}
void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setApellido(std::string apellido) {
    this->apellido = apellido;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::setDocumento(std::string documento) {
    this->documento = documento;
}