#include <iostream>
#include "dado.h"
#include "jugador.h"
#include "tablero.h"

using std::cout;
using std::endl;

int main()
{
 Dado midado; 
 midado.set_caras(8);
 midado.imprimir();  

 for (int i =0; i<5; i++)
 {
    cout<< midado.lanzar()<<endl;
 }

Jugador yo;
yo.imprimir();
yo.set_nombre("Juan"); 
yo.imprimir();
yo.mover();
yo.imprimir();

Jugador tu(10, "Sirael");
tu.imprimir();

Tablero si;
si.imprime();
}
