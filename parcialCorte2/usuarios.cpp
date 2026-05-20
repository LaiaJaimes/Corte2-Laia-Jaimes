#include "../include/usuarios.h"


Usuarios::Usuarios(
    std::string nombre,
    std::string documento,
    int codigoUsuario,
    int cantidadLibrosPrestados
)
: Persona(nombre, documento)
{
this->codigoUsuario = codigoUsuario;

    this->cantidadLibrosPrestados =
    cantidadLibrosPrestados;
}

void Usuarios::mostrarRol() {

    std::cout << "Rol: Usuario"
              << std::endl;