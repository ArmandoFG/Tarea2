#include "aviones.h"
#include "string.h"
#include <string.h>
#include <string>
#include <iostream>

using namespace std;


struct AVION{
    string nombre;
    AVION *Siguiente;
    string Ida;
    string Vuelta;
    string Origen;
    string Destino;
};
typedef struct AVION *AuxAvion;

AuxAvion CabezaAvion;

Aviones::Aviones(string Ida, string Vuelta, string origen, string destino)
{


    this->Vuelta = Vuelta;
    this->Ida = Ida;
    this->origen = origen;
    this->destino = destino;
    CabezaAvion = NULL;
}

void Aviones::insertarAvion(string Empresa, string ida, string vuelta, string origen, string destino)
{
    AuxAvion Auxiliar;
    AuxAvion nuevo = new struct AVION;
    nuevo->nombre = Empresa;
    nuevo->Siguiente = NULL;
    nuevo->Ida = ida;
    nuevo->Vuelta = vuelta;
    nuevo->Origen = origen;
    nuevo->Destino = destino;
    if (CabezaAvion == NULL){
        CabezaAvion = nuevo;

    }
    else{
    Auxiliar = CabezaAvion;
    while(Auxiliar->Siguiente != NULL){
        Auxiliar = Auxiliar->Siguiente;
    }
    Auxiliar->Siguiente = nuevo;
    }
}

void Aviones::Generar()
{
    insertarAvion("Avianca", "16/03/2020", "20/03/2020", "China", "Colombia");
    insertarAvion("Avianca", "18/03/2020", "25/03/2020", "China", "Argentina");
    insertarAvion("American Airlines", "20/03/2020", "25/03/2020", "China", "Panama");
    insertarAvion("Avianca", "16/03/2020", "20/03/2020", "China", "Panama");
    insertarAvion("American Airlines", "18/03/2020", "25/03/2020", "China", "Perú");
    insertarAvion("American Airlines", "20/03/2020", "25/03/2020", "China", "Colombia");


}

void Aviones::Buscar()

{
    cout<< "\n"<<"AVIONES DISPONIBLES"<<"\n \n";
    AuxAvion Temp;
    Temp = CabezaAvion;
    while (Temp->Siguiente != NULL){
        if(Temp->Ida == Ida && Temp->Vuelta == Vuelta && Temp->Destino == destino && Temp->Origen == origen){
            cout<<Temp->nombre<<" Fecha de ida: "<<Temp->Ida<<" Fecha de vuelta:"<<Temp->Vuelta<< " Origen:"<<Temp->Origen<<" Destino:"<<Temp->Destino<<"\n";


        }
        Temp = Temp->Siguiente;
    }
}

