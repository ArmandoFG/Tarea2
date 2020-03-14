#ifndef FACHADA_H
#define FACHADA_H
#include <hotel.h>
#include <aviones.h>
#include "string.h"
#include <string.h>
#include <string>


class Fachada
{
public:
    string Ida;
    string Vuelta;
    string origen;
    string destino;
    Fachada();
    void Ejecutar(string Ida, string Vuelta, string origen, string destino);
};

#endif // FACHADA_H
