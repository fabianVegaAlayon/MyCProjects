#include <stdio.h>
#include "funciones.h"

int main()
{
    long fecha;
    int cantMarzo = 0;
    int cantBisiesto = 0;
    int cantError = 0;
    int dia,mes,anio;
    int anioBisiesto,hayError;

    printf("Ingrese una fecha: \n");
    scanf("%ld",&fecha);

    while(fecha != 0)
    {
       dividirFecha(fecha,&anio,&mes,&dia);
       anioBisiesto =esAnioBisiesto(anio);

       if(mes==3)
        {
            cantMarzo =+1;

        }

        if(anioBisiesto)
        {
            cantBisiesto =+1;
        }

        hayError = (dia==29) &&(mes==2) && !anioBisiesto;

        if(hayError)
            {
                cantError =+ 1;
            }
            printf("Ingrese una fecha: \n");
            scanf("%ld",&fecha);
    }

    printf("Fechas de marzo: %d\n",cantMarzo);
    printf("Anios Bisiestos: %d\n",cantBisiesto);
    printf("Hay %d Errores \n",cantError);

    return 0;
}
