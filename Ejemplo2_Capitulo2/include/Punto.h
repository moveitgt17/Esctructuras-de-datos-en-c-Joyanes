#ifndef PUNTO_H
#define PUNTO_H
//Esta clase solo se utiliza para las delcaraciones

class Punto
{
    public:
        Punto(int x_, int y_){x=x_; y=y_;}//constructor que asigan valores dados
        Punto(){x=y=0;}//constructor vacio inicializa en 0
        int leerY() const;//devuelve valor de Y
        int leerX()const; //devuelve alro X
        void fijarX(int x_); //establece x
        void fijarY(int y_); //establece y

    private:
        int x,y;//declarando variables de la clase punto (atributos)
};

#endif // PUNTO_H
