#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class MarcoRossi : public Dibujo, public Actualizable
{
private:
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

    ~MarcoRossi() {}
};