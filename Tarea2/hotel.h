#ifndef HOTEL_H
#define HOTEL_H
#include "string.h"
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

class Hotel
{
public:
    string Entrada;
    string Salida;

    Hotel(string Entrada, string Salida);
    void insertarHotel(string Nombre, string entrada, string salida);
    void Buscar();
};

#endif // HOTEL_H
