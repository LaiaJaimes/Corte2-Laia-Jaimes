#include <iostream>

class Vehiculo{

private:
    int modelo;

protected:
    int velocidadMax;

public:
    void setModelo(int modelo){
        this->modelo = (modelo<2000 || modelo>2000) ? 2000 : modelo;
    }
    void getModelo(){
        std::cout <<"El vehiculo es modelo" << this->modelo <<std::endl;
    }
    void setVelocidadMax(int velocidadMax){
        this->VelocidadMax = velocidadMax;
    }

};

class Moto : public Vehiculo{

public:
    void mostrarTipo(){
        std::cout <<"Motocicleta" << std::endl;
    }
    void mostrarVelocidadMax(){
        std::cout <<"Velocidad maxima" << this->VelocidadMax <<std::endl;
    }
};

int main(){

    Moto MotoLaia;

    MotoLaia.setModelo(2005);
    MotoLaia.getModelo();
    MotoLaia.mostrarTipo();
    MotoLaia.modelo();

    return 0;
}