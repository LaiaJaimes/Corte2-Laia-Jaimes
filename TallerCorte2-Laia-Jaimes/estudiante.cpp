#include <iostream>
#include <string>
#include <cstdio>

Estudiante::Estudiante(
    string nombre,
    string apellido,
    int edad,
    string documento,
    string codigo,
    int semestre,
    float promedio
)
: Persona(nombre, apellido, edad, documento)
{
    this->codigo = codigo;
    this->semestre = semestre;
    this->promedio = promedio;
}
void Estudiante::inscribirCurso() {
    cout << "Curso inscrito correctamente." << endl;
}

void Estudiante::mostrarInformacion() {
    cout << "\n ESTUDIANTE " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Documento: " << documento << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Semestre: " << semestre << endl;
    cout << "Promedio: " << promedio << endl;
}