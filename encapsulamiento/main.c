#include <stdio.h>
#include "Cabeceras.h"

int main()
{
    Fecha f1 = crearFecha(2,10,1970);
    Fecha f2 = crearFecha(11,03,1998);

    //obtengo la representacion de la fecha en formato "dd/mm/aaaa"
    char* sF1 = toString(f1);
    char* sF2 = toString(f2);

    if(compararFechas(f1,f2) < 0)
    {
        printf("%s es posterior a %s\n",sF2, sF1);
    }else
         {
            printf("%s es posterior a %s\n",sF1, sF2);
         }


    return 0;
}
