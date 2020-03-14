#include <QCoreApplication>
#include <fachada.h>
#include <iostream>
#include <hotel.h>

int main()
{

    Fachada Consulta = *new Fachada;

    Consulta.Ejecutar();


}
/*
this->insertarHotel("Hotel Estrella", "16/03/2020", "20/03/2020");
this->insertarHotel("Hotel Mira Mar", "18/03/2020", "25/03/2020");
this->insertarHotel("Hotel BElla Vista", "20/03/2020", "25/03/2020");
this->insertarHotel("Hotel Valle Grande", "18/03/2020", "25/03/2020");
this->insertarHotel("Hotel Cancun", "16/03/2020", "20/03/2020");
this->insertarHotel("Hotel LLano", "16/03/2020", "20/03/2020");
this->insertarHotel("Hotel Garro", "20/03/2020", "25/03/2020");
this->insertarHotel("Hotel Cerro", "18/03/2020", "25/03/2020");
this->insertarHotel("Hotel HP", "16/03/2020", "20/03/2020");
this->insertarHotel("Hotel Oceania", "20/03/2020", "25/03/2020");

void Hotel::Generar()
{
    insertarHotel("Hotel Estrella", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel Mira Mar", "18/03/2020", "25/03/2020");
    insertarHotel("Hotel BElla Vista", "20/03/2020", "25/03/2020");
    insertarHotel("Hotel Valle Grande", "18/03/2020", "25/03/2020");
    insertarHotel("Hotel Cancun", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel LLano", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel Garro", "20/03/2020", "25/03/2020");
    insertarHotel("Hotel Cerro", "18/03/2020", "25/03/2020");
    insertarHotel("Hotel HP", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel Oceania", "20/03/2020", "25/03/2020");


}

*/
