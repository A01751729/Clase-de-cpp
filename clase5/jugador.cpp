#include "jugador.h"
#include <iostream> // no lo toma en cuenta por que ya esta en el .h a menos que uses cosas fuera de la clase
using std::cout;
using std::endl;

void Jugador::cambia_posicion(int n)
{
    posicion = posicion + n;

}

int Jugador:: get_posicion()
{
    return posicion;
}

void Jugador:: set_nombre(string n)
{
    nombre = n;
}

void Jugador:: imprimir()
{
    cout << "Soy el jugador " << nombre << endl;
    cout << "Mi posicion es " << posicion << endl;
}

void Jugador:: mover()
{
    int mov=midado.lanzar();
    cambia_posicion(mov);
}