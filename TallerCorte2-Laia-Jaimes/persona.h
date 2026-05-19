#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string> 
#include <cstdio>

/**
 * @class Persona
 * @brief Clase abstracta base del sistema.
 */

 class Persona {
 protected:
    string nombre;
    string apellido;
    int edad;
    string documento;

 public:
    Persona(string nombre, string apellido, int edad, string documento);

    virtual void mostrarInformacion() = 0;

    string getNombre();
    void setNombre(string nombre);

    virtual Persona();

        virtual Persona();
};

#endif
