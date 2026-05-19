#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona {
private:
    string codigo;
    int semestre;
    float promedio;
    