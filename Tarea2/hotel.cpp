#include "hotel.h"
#include <iostream>

using namespace std;

struct hoteles{
    string entrada;
    string salida;
    string nombre;
    hoteles *siguiente;

};

typedef struct hoteles *auxHotel;

auxHotel Cabeza;



Hotel::Hotel(string Entrada, string Salida)
{

    this->Entrada = Entrada;
    this->Salida = Salida;
    Cabeza = NULL;


}



void Hotel::insertarHotel(string Nombre, string entrada, string salida){
    auxHotel Auxiliar;
    auxHotel nuevo = new struct hoteles;
    nuevo->nombre = Nombre;
    nuevo->siguiente = NULL;
    nuevo->entrada = entrada;
    nuevo->salida = salida;
    if (Cabeza == NULL){
        Cabeza = nuevo;

    }
    else{
    Auxiliar = Cabeza;
    while(Auxiliar->siguiente != NULL){
        Auxiliar = Auxiliar->siguiente;
    }
    Auxiliar->siguiente = nuevo;
}
}


void Hotel::Generar()
{
    insertarHotel("Hotel Estrella", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel Mira Mar", "18/03/2020", "25/03/2020");
    insertarHotel("Hotel Bella Vista", "20/03/2020", "25/03/2020");
    insertarHotel("Hotel Valle Grande", "18/03/2020", "25/03/2020");
    insertarHotel("Hotel Cancun", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel LLano", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel Garro", "20/03/2020", "25/03/2020");
    insertarHotel("Hotel Cerro", "18/03/2020", "25/03/2020");
    insertarHotel("Hotel HP", "16/03/2020", "20/03/2020");
    insertarHotel("Hotel Oceania", "20/03/2020", "25/03/2020");


}




void Hotel::Buscar()
{

    cout<< "\n"<<"Hoteles Disponibles"<<"\n \n";
    auxHotel Temp;
    Temp = Cabeza;
    while (Temp->siguiente != NULL){
        if(Temp->entrada == Entrada && Temp->salida == Salida){
            cout<<Temp->nombre<<" Entrada: "<<Temp->entrada<<" Salida:"<<Temp->salida<<"\n";


        }
        Temp = Temp->siguiente;
    }
}












