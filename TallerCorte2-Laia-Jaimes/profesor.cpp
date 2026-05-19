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

void Profesor::asignarCurso() {
    cout << "Curso asignado." << endl;
}

void Profesor::mostrarInformacion() {
    cout << "\n PROFESOR " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Especialidad: " << especialidad << endl;
    cout << "Salario: " << salario << endl;
}