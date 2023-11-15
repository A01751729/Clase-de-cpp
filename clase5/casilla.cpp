#include <iostream>
#include "casilla.h"

using std::cout;
using std:: endl;

Casilla::Casilla()
{
    pos = 0;
    cambio = 0;
}

Casilla::Casilla(int p, int c)
{
    pos = p;
    cambio = c;
}

void Casilla::imprimir()
{
    cout << "posicion es: "<< pos <<endl;
    cout << "cambio es: " << cambio << endl;
}

int Casilla::getPos()
{
    return pos;
}

void Casilla::setPos(int p)
{
    pos = p;
}

int Casilla::getCambio()
{
    return cambio;
}