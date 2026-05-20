#ifndef USUARIOS_H
#define USUARIOS_H

#include "persona.h"

class Usuarios : public Persona {
    private:
    int codigoUsuario;
    int cantidadLibrosPrestados;

public:

    Usuarios(
        std::string nombre,
        std::string documento,
        int codigoUsuario,
        int cantidadLibrosPrestados
    );
     void mostrarRol() override;

    void mostrarInformacion() override;

    int getCodigoUsuario();

    int getCantidadLibrosPrestados();
