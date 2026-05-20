#include <iostream>
#include <string>
#include <cstdio>
#include "libros.h"


Libros::Libros(
    std::string titulo,
    std::string autor,
    int codigoLibro,
    bool disponible
) {

 this->titulo = titulo;
    this->autor = autor;
    this->codigoLibro = codigoLibro;
    this->disponible = disponible;
}

void Libros::mostrarInformacion() {

    std::cout << "\n===== LIBRO ====="
              << std::endl;

    std::cout << "Titulo: "
              << titulo
              << std::endl;

                std::cout << "Autor: "
              << autor
              << std::endl;

    std::cout << "Codigo libro: "
              << codigoLibro
              << std::endl;

    std::cout << "Disponible: ";

    if(disponible) {

        std::cout << "Si"
                  << std::endl;
    }
  else {

        std::cout << "No"
                  << std::endl;
    }
}
void Libros::prestarLibro() {

    if(disponible) {

        disponible = false;

        std::cout
        << "Libro prestado correctamente."
        << std::endl;
    }

     else {

        std::cout
        << "El libro no esta disponible."
        << std::endl;
    }
}

