#include "Punto.h"

int Punto::leerX() const
{
    return x;
}
int Punto::leerY() const
{
    return y;
}
void Punto::fijarX(int x_)
{
    x = x_;
}
void Punto::fijarY(int y_)
{
    y = y_;
}
