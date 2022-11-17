#include <stdio.h>
#include <string.h>
#include "Alumno.h"

Alumno ingresoRegistroXConsola();

int main()
{
    FILE* arch = fopen("Alumnos.txt", "r+b");
     Alumno reg = ingresoRegistroXConsola();

     fseek(arch,0,SEEK_END);

     fwrite(&reg,sizeof(Alumno),1,arch);

     fclose(arch);


    return 0;
}

Alumno ingresoRegistroXConsola()
{
    int matricula,nota;
    char nombre[20];

    printf("Ingrese matricula: \n");
    scanf("%d",&matricula);
    printf("Ingrese nombre: \n");
    scanf("%s",nombre);
    printf("ingrese nota: \n");
    scanf("%d",&nota);

    Alumno a;
    a.matricula =matricula;
    strcpy(a.nombre,nombre);
    a.nota = nota;

    return a;
}

