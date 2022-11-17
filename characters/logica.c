#include<stdio.h>
#include "metodos.h"


char* recorrer (char palabra[])
{
    int i = 0;
    int j = 0;
    char cadena[10];


  while(palabra[i]!='\0')
    {
        int valor;

        valor = palabra[i];
        if(valor  == 122 || valor  == 90 )
            {
                valor = (valor-25) +1;
            }else
             {
                 valor += 2;
             }


        cadena[j] = valor;

        i++;
        j++;


    }

    palabra[i] = '\0';
    cadena[i] = '\0';
/*
printf("original %s", palabra);
printf("modificada %s", cadena);*/

return cadena;

}
