#include <stdio.h>
#include <stdlib.h>
#include "metodos.h"

int main()
{
    char palabra[10];
   /* int i = 0;
    int j = 0;
    */char cadena[10];

    printf("ingrese una palabra: ");
    scanf("%s",palabra);
/*

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


printf("original %s \n", palabra);
printf("modificada %s \n", cadena);
*/

char*s = recorrer(palabra);
printf("modificada %s \n", s);
    return 0;
}
