int <iostream>

class EquipoFutbol{

private:
    int nombre;

protected:
    int puntosTemporada;

public:
    
    void setNombre(int nombre){
        this->nombre = (nombre)
    }
    void getNombre(){
        std::cout <<"El equipo es: "
    }

};

class jugador : public EquipoFutbol{

public:
    void mostrarJugador(){

    }
}

