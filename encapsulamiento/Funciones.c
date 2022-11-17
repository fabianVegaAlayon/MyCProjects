#include "Cabeceras.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Fecha crearFecha(int d,int m,int a)
{
    Fecha f;
    f.dia = d;
    f.mes = m;
    f.anio = a;

    return f;
}

int obtenerDia(Fecha f)
{
    return f.dia;
}

int obtenerMes(Fecha f)
{
    return f.mes;
}

int obtenerAnio(Fecha f)
{
    return  f.anio;

}

int compararFechas(Fecha f1,Fecha f2)
{
    int difD=f2.dia-f1.dia;
    int difM=f2.mes-f1.mes;
    int difA=f2.anio-f1.anio;

    return difA!=0?difA:difM!=0?difM:difD;
}


char* toString(Fecha f)
{

    char* s =(char*)malloc(11);

    sprintf(s,"%02d/%02d/%04d",f.dia,f.mes,f.anio);

    return s;
}
