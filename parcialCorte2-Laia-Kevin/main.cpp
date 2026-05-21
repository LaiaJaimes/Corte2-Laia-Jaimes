#include <iostream>

#include "include/persona.h"
#include "include/usuarios.h"
#include "include/bibliotecarios.h"
#include "include/libros.h"

int main() {

    Usuarios usuario1(
        "Kevin",
        "12345",
        1001,
        2
    );
     Bibliotecarios bibliotecario1(
        "Laia",
        "1000045875",
        501,
        3500000
    );
    Libros libro1(
        "El gato negro",
        "Edgar Allan Poe",
        200,
        true
    );

    usuario1.mostrarRol();

    usuario1.mostrarInformacion();

    bibliotecario1.mostrarRol();

    bibliotecario1.mostrarInformacion();
