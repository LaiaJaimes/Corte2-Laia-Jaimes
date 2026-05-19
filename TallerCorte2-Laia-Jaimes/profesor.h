#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"

class Profesor : public Persona {
private:
    string especialidad;
    float salario;
}
public:
    Profesor(
        string nombre,
        string apellido,
        int edad,
        string documento,
        string especialidad,
        float salario
    );

    void asignarCurso();

    void mostrarInformacion() override;
};