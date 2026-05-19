#include <iostream>
#include <string>
#include <cstdio>
#include "persona.h"

Persona::Persona(string nombre, string apellido, int edad, string documento) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->documento = documento;
}
string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;

Persona::Persona() {
}
