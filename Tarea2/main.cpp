#include <QCoreApplication>
#include <fachada.h>
#include <iostream>
#include <hotel.h>


string Ida;
string Vuelta;
string origen;
string destino;

void menu();

int main()
{
    int Opcion = 0;

    Fachada Consulta = *new Fachada;


    do
            {
                menu();
                cin>>Opcion;

    switch (Opcion) {

    case 1:
        cout<< "Ingrese Fecha de ida hacia el destino: ";
        cin>>Ida;
        cout<<"Ingrese fecha de vuelta: ";
        cin>>Vuelta;
        cout<<"Ingrese lugar de destino: ";
        cin>>destino;
        cout<<"Ingrese lugar de origen: ";
        cin>>origen;

        Consulta.Ejecutar(Ida, Vuelta, origen, destino);
        break;
        ;



    }
    }

    while(Opcion != 2);{

    }



}




void menu(){
    cout<< "1) Consulta \n"
           "2) salir \n";

}

