#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>
using namespace std;

class MenuP : public Dibujo

{
private:
public:
    MenuP() : Dibujo("MetalSlug")
    {
    }

    void Actualizar()
    {
    }

    ~MenuP() {}
};