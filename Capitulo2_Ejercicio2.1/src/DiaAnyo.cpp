#include "DiaAnyo.h"
#include <iostream>
bool DiaAnyo::igual(const DiaAnyo& d)const//ESTA ES UNA FUNCION FUERA DE LINEA YA QUE SU IMPLEMTACION SE ENCUENTRA FUERA DEL ARCHIVO .h
{
    if((dia==d.dia)&&(mes==d.mes))
        return true;
    else
        return false;
}
void DiaAnyo::visualizar() const//OTRA FUNCION FUERA DE LINEA
{
    std::cout<<"mes = "<<mes<<", dia = "<<dia<<std::endl;
}
