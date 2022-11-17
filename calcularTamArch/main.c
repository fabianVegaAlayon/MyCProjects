#include <stdio.h>
#include <stdlib.h>

long fileSize(FILE* f)
{
    long actual =  ftell(f);
    fseek(f,0,SEEK_END);
    long ultimo = ftell(f);
    fseek(f,actual,SEEK_SET);
    return ultimo;
}



int main()
{
     FILE* arch;

     arch =  fopen("oracle.txt","r+a");

     long size =  fileSize(arch);
     printf("El archivo tiene un tamanio de %ld bytes \n",size);


    return 0;
}
