#include <iostream>
#include "DiaAnyo.h"

using namespace std;

int main()
{
    DiaAnyo *hoy;
    DiaAnyo *cumpleanyos;
    int d, m;

    cout<<"Introduzca el numero del dia de hoy: "; cin>>d;
    cout<<"Introduzca el numero del mes de hoy: "; cin>>m;
    hoy = new DiaAnyo(d,m);
    cout<<"Introduzca el numero de dia de su nacimiento: "; cin>>d;
    cout<<"Ingroduzca el numero de mes de su nacimiento: "; cin>>m;
    cumpleanyos = new DiaAnyo(d,m);

    cout<<"\nLA FECHA DE HOY ES: ";
    hoy->visualizar();
    cout<<"nSU FECHA DE NACIMIENTO ES: ";
    cumpleanyos->visualizar();

    if(hoy->igual(*cumpleanyos))
    {
        cout<<"!FELIZ CUMPLEANYOS¡"<<endl;
    }else
    {
        cout<<"!FELIZ DIA¡"<<endl;
    }

    return 0;
}
