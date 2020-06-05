#include "Hora.h"
#include <iostream>
void Hora::visualizar()
{
    std::cout<< horas << ":" << minutos << ":" << segundos << std::endl;
}
void Hora::sumar(Hora h1, Hora h2 )
{
    segundos = h2.segundos + h1.segundos;
    minutos = h2.minutos + h1.minutos + segundos / 60;
    segundos = segundos % 60;
    horas = h2.horas + h1.horas + minutos / 60;
    minutos %= 60;
}

