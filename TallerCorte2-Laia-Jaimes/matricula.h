#ifndef MATRICULA_H
#define MATRICULA_H

/**
 * @class Matricula
 * @brief Representa una matrícula universitaria.
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
    
    void mostrarMatricula;

    string getEstadoMatricula;
    float getNotaFinal;

    void setEstadoMatricula(string estadoMatricula);
    void setNotaFinal(float notaFinal);

};

#endif 
