#include "fachada.h"
#include "string.h"
#include <string.h>
#include <string>

using namespace std;

Fachada::Fachada()
{


}
void Fachada::Ejecutar(){

    Hotel Hotel1 = *new Hotel("16/03/2020", "20/03/2020");
    Hotel1.Generar();
    Hotel1.Buscar();
    Aviones Avion1 = *new Aviones("16/03/2020", "20/03/2020", "Costa Rica", "Colombia");
    Avion1.Generar();
    Avion1.Buscar();
}
