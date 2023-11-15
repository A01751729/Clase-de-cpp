#include <iostream>
#include "tablero.h"

using std::cout;
using std:: endl;

Tablero::Tablero()
{
    for (int i=0; i<100; i++)
    {
        cas[i].setPos(i);
    }
}

void Tablero::imprime()
{
    for (int j=0; j<100;j++)
    {
        cas[j].imprimir();   
    }
}