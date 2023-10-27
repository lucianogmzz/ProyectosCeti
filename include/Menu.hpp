#pragma once
#include <Dibujo.hpp>

class Menu : public Dibujo

{
private:
    
public:
    Menu() : Dibujo("MetalSlug") 
    {
    }

    Menu() : Dibujo(x, y, "MetalSlug")
    {
    }




    ~Menu() {}
};