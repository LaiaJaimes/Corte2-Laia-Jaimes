#include <iostream>
#include "estudiante.h"
#include "profesor.h"
#include "curso.h"
#include "matricula.h"


int main() {

    Estudiante estudiante1(
        "Laia",
        "Jaimes",
        23,
        "12345",
        "C",
        3,
        4.5
    );

    Profesor profesorUP(
        "Profesor",
        "UP",
        40,
        "1008093",
        "POO",
        4500000
    );

    Curso cursoPOO("POO", "POO101", 4);

    Matricula matriculaUP("Activa", 4.2);

    estudiante1.mostrarInformacion();
    profesorUP.mostrarInformacion();
    cursoPOO.mostrarCurso();
    matriculaUP.mostrarMatricula();

    return 0;
}