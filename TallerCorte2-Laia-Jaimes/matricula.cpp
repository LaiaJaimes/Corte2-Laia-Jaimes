#ifndef MATRICULA_H
#define MATRICULA_H

#include <iostream>
#include <string>


/**
 * @class Matricula
 * @brief Matricula.
 */

 class Matricula {

private:
    string estadoMatricula;
    float notaFinal;

public:

    Matricula(
        string estadoMatricula,
        float notaFinal
    );

     void mostrarMatricula();

    // GETTERS
    string getEstadoMatricula();
    float getNotaFinal();

    // SETTERS
    void setEstadoMatricula(string estadoMatricula);
    void setNotaFinal(float notaFinal);
};

#endif

