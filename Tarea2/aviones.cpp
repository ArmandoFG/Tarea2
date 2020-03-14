#include "aviones.h"
#include "string.h"
#include <string.h>
#include <string>

using namespace std;


Aviones::Aviones(int diaEntrada, int mesEntrada, int diaSalida, int mesSalida, string origen, string destino)
{


    this->diaEntrada = diaEntrada;
    this->diaSalida = diaSalida;
    this->mesEntrada = mesEntrada;
    this->mesSalida = mesSalida;
    this->origen = origen;
    this->destino = destino;
}
