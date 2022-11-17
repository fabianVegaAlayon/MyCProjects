#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "metodos.h"

int main()
{
    char a[50];
    char b[50];

    // int tamanioCad1;
    // int tamanioCad2;

    printf("ingrese la cadena: 1\n");
    scanf("%s",a);
    printf("ingrese la cadena: 2\n");
    scanf("%s",b);
   // tamanioCad1 =  strlen(a);
   // tamanioCad2 =  strlen(b);
    int salida1 = verificarCaracteres(a);
    int salida2 = verificarCaracteres(b);




    if(salida1 == 1 && salida2 == 1)
    {
/*
  alinearCadenas(a,b);



        printf("============================\n");
        cantLetrasRepetidas(a);
        printf("============================\n");
        cantLetrasRepetidas(b);
        printf("============================\n");
        ordenar(a,tamanioCad1);
        ordenar(b,tamanioCad2);*/

        int r =  sumar(a,b);
        printf("%d",r);

     /* imprimirCadenaOrdenada(a,tamanioCad1);
      imprimirCadenaOrdenada(b,tamanioCad2);*/

          imprimirEnFuncionDelMasGrande(a,b);


    }else
        {
            printf("Debe ingresar letras o numeros \n");
        }



    return 0;
}
