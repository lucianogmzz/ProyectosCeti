#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <MarcoRossi.hpp>
#include <NaveAlien.hpp>
#include<Helicoptero.hpp>
#include <MenuP.hpp>
#include <curses.h>
#include <unistd.h>
using namespace std;

int main(int argc, char const *argv[])
{
    
    Ventana ventana;
    MenuP * menuP = new MenuP();
    

    MarcoRossi* marco = new MarcoRossi(0,0);
    NaveAlien* nave1 = new NaveAlien(200,20);
    NaveAlien* nave2 = new NaveAlien(200,100);
    NaveAlien* nave3 = new NaveAlien(200,200);
    Helicoptero* helicoptero1 = new Helicoptero(20, 0);
    Helicoptero* helicoptero2 = new Helicoptero(100, 0);






    list<Dibujo*> dibujos;
    dibujos.push_back(menuP);

    list<Actualizable *> actualizables;
    actualizables.push_back(marco);
    actualizables.push_back(nave1);
    actualizables.push_back(nave2);
    actualizables.push_back(nave3);
   

  


    getch();

      while (true)
    {

        int key = getch();

        //Menu principal

        if(key == 'C' || key =='c')
        {
            dibujos.push_back(marco);
            dibujos.push_back(nave1);
            dibujos.push_back(nave2);
            dibujos.push_back(nave3);
            dibujos.push_back(helicoptero1);
            dibujos.push_back(helicoptero2);
            dibujos.remove(menuP);
            clear();
        }

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

        if(key == KEY_UP )
        {
            nave1->DesplazarArri();
            nave2->DesplazarArri();
            nave3->DesplazarArri();
        }

        if(key == KEY_DOWN)
        {
            nave1->DesplazarAbaj();
            nave2->DesplazarAbaj();
            nave3->DesplazarAbaj();
        }

        if(key == KEY_LEFT){
            nave1->DesplazarIzq();
            nave2->DesplazarIzq();
            nave3->DesplazarIzq();
        }

        if(key == KEY_RIGHT)
        {
            nave1->DesplazarDer();
            nave2->DesplazarDer();
            nave3->DesplazarDer();
        }
        

        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }



    return 0;
}
