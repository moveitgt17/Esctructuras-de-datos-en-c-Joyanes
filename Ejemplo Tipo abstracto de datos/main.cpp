#include <iostream>
#include "Hora.h"
/*Este es el ejemplo uno de tipos abstractos de datos pagina 25-26
en donde se crea una clase hora*/
using namespace std;

int main()
{
    Hora h1(10,40,50), h2(12,35,40),h;
    h1.visualizar();
    h2.visualizar();
    h.sumar(h1,h2);
    h.visualizar();

    return 0;
}
