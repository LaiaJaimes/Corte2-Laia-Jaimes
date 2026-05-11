#include <iostream>
#include <string>
#include "clase.h"

class Persona;

private:
    const int altura = 180;
    int edad;

public:

    void setEdad(int edad){
        if (edad >=0)
        {
            this->edad = edad;
        } else{
            std::cout << "Edad invalida" <<std::endl;
        }
    }

