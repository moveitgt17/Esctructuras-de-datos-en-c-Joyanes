#ifndef DIAANYO_H
#define DIAANYO_H
//ESTE ES EL ARCHIVO CON EXTENSION .h MENCIONADO

class DiaAnyo
{
    public://AQUI SE DECLARAN LAS FUNCIONES MIEMBRO DE NUESTRA CLASE
        DiaAnyo(int d, int m)// ESTA ES UNA FUNCION EN LINEA YA QUE SE IMPLEMENTA EN ESTE ARCHIVO
        {
            dia = d;
            mes = m;
        }
        bool igual(const DiaAnyo& d) const;
        void visualizar() const;

    private:
        int dia, mes;
};

#endif // DIAANYO_H
