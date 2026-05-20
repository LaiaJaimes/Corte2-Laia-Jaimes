#ifndef BIBLIOTECARIOS_H
#define BIBLIOTECARIOS_H

#include "persona.h"

class Bibliotecarios : public Persona {

private:
    int codigoEmpleado;
    float salario;

    public:

    Bibliotecarios(
        std::string nombre,
        std::string documento,
        int codigoEmpleado,
        float salario
    );

     void mostrarRol() override;

    void mostrarInformacion() override;

     int getCodigoEmpleado();

    float getSalario();

     void setCodigoEmpleado(
        int codigoEmpleado
    );

    void setSalario(float salario);
};

#endif