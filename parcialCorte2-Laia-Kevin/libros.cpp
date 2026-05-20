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
