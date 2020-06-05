#ifndef HORA_H
#define HORA_H


class Hora
{
    public:
        Hora(){horas=0; minutos=0; segundos=0;};//inicializa valores en 0
        Hora(int h, int m, int s){horas = h; minutos=m; segundos=s;}//constructor que asigna valores dados
        void visualizar();//metodo para visualizar la hora
        void sumar(Hora h1, Hora h2);//metodo para sumar las horas

    private:
        int horas, minutos, segundos;//atributos de la clase hora
};

#endif
