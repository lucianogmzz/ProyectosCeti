#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Arma.hpp>

class NaveAlien : public Dibujo, public Actualizable
{
private:
    Arma *arma;

public:
    NaveAlien() : Dibujo("NaveAlien")
    {
    }

    NaveAlien(int x, int y) : Dibujo(x, y, "NaveAlien")
    {
    }

    void Actualizar()
    {
    }

    void DesplazarIzq()
    {
        this->x -= 1;
    }

    void DesplazarDer()
    {
        this->x += 1;
    }

    void DesplazarArr()
    {
        this->y += 1;
    }

    void DesplazarAba()
    {
        this->y -= 1;
    }

    void RecogerArma(Arma *arma)
    {
        this->arma = arma;
    }

    void Disparar()
    {
    }

    ~NaveAlien() {}
};