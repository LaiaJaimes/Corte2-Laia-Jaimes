#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona {
private:
    string codigo;
    int semestre;
    float promedio;

    public:
    Estudiante(
        string nombre,
        string apellido,
        int edad,
        string documento,
        string codigo,
        int semestre,
        float promedio
    );