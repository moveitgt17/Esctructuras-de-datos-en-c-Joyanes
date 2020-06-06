#include <iostream>
#include <iostream>
#include "Punto.h"
#include <conio.h>

using namespace std;

int main()
{
    Punto p1(2,1); //Objeto creado de forma estatica
    Punto *p2 = new Punto(2,1); //Objeto creado de forma dinamica
    Punto p3; //llama al constructor sin argunametos
    p3.fijarX(10);
    p3.fijarY(5);
    Punto *p4;
    p4 = new Punto(2, -5);
    cout<<"PUNTO UNO: ";
    cout<<"("<<p1.leerX()<<","<<p1.leerY()<<")"<<endl;
    cout<<"PUNTO DOS: ";
    cout<<"("<<p2->leerX()<<","<<p2->leerY()<<")"<<endl;
    cout<<"PUNTO TRES: ";
    cout<<"("<<p3.leerX()<<","<<p3.leerY()<<")"<<endl;
    cout<<"PUNTO CUATRO: ";
    cout<<"("<<p4->leerX()<<","<<p4->leerY()<<")"<<endl;

    getch();
    return 0;
}
