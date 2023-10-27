#pragma once
#include<Dibujo.hpp>
#include<list>


class Arma : public Dibujo
{
private:
    int numeroDisparos;

public:
    Arma() : Dibujo("arma")
    {
    this->numeroDisparos = 5;
    }
    ~Arma() {}

    void Disparar(){
        if(this->numeroDisparos > 0){
            this->numeroDisparos -= 1;
        }
    }

    void Recargar(){

    }

    
};