#include <stdio.h>

#include <string.h>
#include "Alumnos.h"



int main()
{
    FILE* arch = fopen("Alumnos.txt","r+b");

    int n;
    printf("Ingrese un numero de registro: ");
    fflush(stdout);
    scanf("%d",&n);

    //ingreso los nuevos datos por consola
    Alumno reg = ingresoDatosXConsola();

    //posiciono el identificador de posicion
    fseek(arch,n*sizeof(Alumno),SEEK_SET);
     //grabo el registro pisando los valores anteriores
     fwrite(&reg,sizeof(Alumno),1,arch);

     fclose(arch);

    return 0;
}


Alumno ingresoDatosXConsola()
{
    int matricula, nota;
    char nombre[20];

    printf("Ingrese nueva matricula: ");
    scanf("%d",&matricula);
    printf("Ingrese nuevo nombre: ");
    scanf("%s",nombre);
    printf("Ingrese nueva nota: ");
    scanf("%d", &nota);


    Alumno a;

    a.matricula = matricula;
    strcpy(a.nombre,nombre);
    a.nota = nota;


return a;

}
