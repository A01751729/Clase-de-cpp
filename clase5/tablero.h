#ifndef _TABLERO_H_
#define _TABLERO_H_
#include "casilla.h"

class Tablero
{
    private:
        Casilla cas [100];
    public:
        Tablero();
        void imprime();
};

#endif