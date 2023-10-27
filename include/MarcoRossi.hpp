#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Arma.hpp>

class MarcoRossi : public Dibujo, public Actualizable
{
private:
    Arma *arma;

public:
    MarcoRossi() : Dibujo("MarcoRossi")
    {
    }

    MarcoRossi(int x, int y) : Dibujo(x, y, "MarcoRossi")
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
        this->y -= 1;
    }

    void DesplazarAba()
    {
        this->y += 1;
    }

    void RecogerArma(Arma *arma)
    {
        this->arma = arma;
    }

    void Disparar()
    {
    }

    ~MarcoRossi() {}
};