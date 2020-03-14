#ifndef AVIONES_H
#define AVIONES_H
#include "string.h"
#include <string.h>
#include <string>

using namespace std;

class Aviones
{
public:
    int diaEntrada;
    int diaSalida;
    int mesEntrada;
    int mesSalida;
    string origen;
    string destino;

    Aviones(int diaEntrada, int mesEntrada, int diaSalida, int mesSalida, string origen, string destino);
};

#endif // AVIONES_H
