#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"

class Profesor : public Persona {

private:
    string especialidad;
    float salario;

public:

    // Constructor
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

    // GETTERS
    string getEspecialidad();
    float getSalario();

    // SETTERS
    void setEspecialidad(string especialidad);
    void setSalario(float salario);
};

#endif
