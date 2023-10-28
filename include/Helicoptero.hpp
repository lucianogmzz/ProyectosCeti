#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Helicoptero : public Dibujo, Actualizable

{
private:
    
public:
    Helicoptero() : Dibujo("Helicoptero")
    {
    }

    Helicoptero(int x, int y) : Dibujo(x, y, "Helicoptero")
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


 
    ~Helicoptero() {}
};