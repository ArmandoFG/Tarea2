#include "fachada.h"
#include "string.h"
#include <string.h>
#include <string>

using namespace std;

Fachada::Fachada()
{


}
void Fachada::Ejecutar(string Ida, string Vuelta, string origen, string destino){

    Hotel Hotel1 = *new Hotel(Ida, Vuelta);
    Hotel1.Generar();
    Hotel1.Buscar();
    Aviones Avion1 = *new Aviones(Ida, Vuelta, origen, destino);
    Avion1.Generar();
    Avion1.Buscar();
}
