#include <iostream>
#include <string>
#include <cstdio>

class Coche{
private:
    std::string fabricante;
    int cilindraje;
    int potencia;
    std::string color;
    double precio;

//metodos
public:
    void encender(){
        std::cout <<"El coche esta encendido\n" << std::endl;
    }
    void acelerar(){
        std::cout <<"El coche esta en marcha\n" << std::endl;
    }
    void frenar(){
        std::cout <<"El coche freno\n" << std::endl;
    }
    