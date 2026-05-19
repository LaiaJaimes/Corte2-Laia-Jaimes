#include <iostream>
#include <string>
#include <cstdio>
#include "profesor.h"

Profesor::Profesor(
    string nombre,
    string apellido,
    int edad,
    string documento,
    string especialidad,
    float salario
)
: Persona(nombre, apellido, edad, documento)
{
    this->especialidad = especialidad;
    this->salario = salario;
}