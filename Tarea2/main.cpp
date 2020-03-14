#include <QCoreApplication>
#include <fachada.h>
#include <iostream>
#include <hotel.h>

int main()
{

    //Fachada Consulta = *new Fachada;
    //cout<<"Holoksokdsod";
    //Consulta.Ejecutar();
    Hotel Hotel1 = *new Hotel("16/03/2020", "20/03/2020");

    Hotel1.Buscar();

}
