#include "../include/usuarios.h"


Usuarios::Usuarios(
    std::string nombre,
    std::string documento,
    int codigoUsuario,
    int cantidadLibrosPrestados
)
: Persona(nombre, documento)
{
