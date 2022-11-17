#include <stdio.h>
#include <stdlib>
#include "cabeceras.h"

XFile xopen(char* filename, char* mode, int recSize)
{
    XFile f;
    //abro el archivo original
    f.arch= fopen(filename,mode);
    //abro el archivo de bajas(obtengo primero el nombre)
    char* filenameBajas = obtenerNombreBajas(filename);
    f.archBajas = fopen(filenameBajas, mode);

    //dimensiono elarray de bajas y subo el archivo de bajas
    f.bajas=(int*)malloc(sizeof(int)*xrecCount(&f,1));
    f.lenBajas=subirBajas(f.archBajas,f.bajas);

    //guardo el tamanio del registro
    f.recSize = recSize;
    //posiciono el punbtero en el primer registro

    xseek(&f,0);
    return f;

}








//cerrar el archivo
void xclose(XFile*);

//leer un registro
void xread(XFile*, void*);

//escribir un registro
void xwrite(Xfile*, void*);

//determinar si llego el fin del archivo
int xeof(XFile*);

//Eliminar un registro
void xdelete(XFile*, int);

//mover el indicador de posici[on del archivo

void xseek(XFile*,int);

//obtener el tamanio del archivo
long xfileSize(XFile*, int raw);

//obtener la cantidad de registros
int xrecCount(XFile*,int raw);

//posiciona el puntero en el registro logico numero 0
void xreset(XFile*);

//retorna el numero de registro logico que actualmente esta siendo apuntado
int xcurrent(XFile*);
