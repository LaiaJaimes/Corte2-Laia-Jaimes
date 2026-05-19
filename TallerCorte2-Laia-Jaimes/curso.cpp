#include <iostream>
#include <string>
#include <cstdio>
#include "curso.h"

Curso::Curso(
    string nombreCurso,
    string codigoCurso,
    int creditos
) {

    this->nombreCurso = nombreCurso;
    this->codigoCurso = codigoCurso;
    this->creditos = creditos;
}
void Curso::mostrarCurso() {

    std::cout << "\n CURSO " << endl;

    std::cout << "Nombre del curso: "
         << nombreCurso << endl;

    std::cout << "Codigo del curso: "
         << codigoCurso << endl;

    std::cout << "Creditos: "
         << creditos << endl;
}
string Curso::getNombreCurso() {
    return nombreCurso;
}

string Curso::getCodigoCurso() {
    return codigoCurso;
}

int Curso::getCreditos() {
    return creditos;
}
void Curso::setNombreCurso(string nombreCurso) {
    this->nombreCurso = nombreCurso;
}

void Curso::setCodigoCurso(string codigoCurso) {
    this->codigoCurso = codigoCurso;
}

void Curso::setCreditos(int creditos) {
    this->creditos = creditos;
}