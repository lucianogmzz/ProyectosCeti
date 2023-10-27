#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <MarcoRossi.hpp>
#include <NaveAlien.hpp>
#include <Arma.hpp>
#include <Bala.hpp>
#include <curses.h>
#include <unistd.h>
using namespace std;

int main(int argc, char const *argv[])
{
    
    Ventana ventana;
    
    MarcoRossi* marco = new MarcoRossi(100,0);
    NaveAlien* nave1 = new NaveAlien(200,50);

    Arma* arma = new Arma();
    Bala* bala = new Bala(0,1);

    marco->RecogerArma(arma);

    list<Dibujo*> dibujos;
    dibujos.push_back(marco);
    dibujos.push_back(nave1);

    dibujos.push_back(arma);
    dibujos.push_back(bala);

    list<Actualizable *> actualizables;
    actualizables.push_back(marco);
    actualizables.push_back(nave1);
    actualizables.push_back(bala);

    getch();

      while (true)
    {

        int key = getch();

        // desplazar marco
        if (key == 'q' || key == 'Q')

            break;

        if (key == 'a' || key == 'A')
        {
            marco->DesplazarIzq();
        }

        if (key == 'd' || key == 'D')
        {
            marco->DesplazarDer();
        }

        if(key == 'w' || key == 'W')
        {
            marco->DesplazarArr();
        }

        if(key == 's' || key == 'S')
        {
            marco->DesplazarAba();
        }

        //desplazar nave





        if(key == ' ')
        {
            arma->Disparar();
        }

        if(key == 'p'){
            bala->CambiarDireccion();
        }

        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }



    return 0;
}
