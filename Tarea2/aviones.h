#ifndef AVIONES_H
#define AVIONES_H
#include "string.h"
#include <string.h>
#include <string>

using namespace std;

class Aviones
{
public:
    string Ida;
    string Vuelta;
    string origen;
    string destino;

    Aviones(string Ida, string Vuelta, string origen, string destino);
    void insertarAvion(string Empresa, string ida, string vuelta, string origen, string destino);
    void Generar();
    void Buscar();
};

#endif // AVIONES_H
