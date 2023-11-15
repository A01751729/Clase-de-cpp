#ifndef _JUGADOR_H_
#define _JUGADOR_H_
#include <iostream>
#include "dado.h"
using std::string;

class Jugador
{
    private:
        string nombre;
        string color;
        int posicion;
        Dado midado;
        void cambia_posicion(int n);
    public:
        Jugador();
        Jugador(int n, string m);
        ~Jugador();
        int get_posicion();
        void set_nombre(string n);
        void imprimir();
        void mover();



};


#endif