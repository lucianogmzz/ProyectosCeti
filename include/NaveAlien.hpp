#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class NaveAlien : public Dibujo, public Actualizable
{
private:
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

    void DesplazarArri()
    {
        this->y -= 1;
    }

    void DesplazarAbaj()
    {
        this->y += 1;
    }

    ~NaveAlien() {}
};