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
    cout << "Curso asignado correctamente." << endl;

    void Profesor::mostrarInformacion() {

    cout << "\n===== PROFESOR =====" << endl;

    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Documento: " << documento << endl;

    cout << "Especialidad: " << especialidad << endl;
    cout << "Salario: " << salario << endl;
}
string Profesor::getEspecialidad() {
    return especialidad;
}

float Profesor::getSalario() {
    return salario;
}


void Profesor::setEspecialidad(string especialidad) {
    this->especialidad = especialidad;
}

void Profesor::setSalario(float salario) {
    this->salario = salario;
}