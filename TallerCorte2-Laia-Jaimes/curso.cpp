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
