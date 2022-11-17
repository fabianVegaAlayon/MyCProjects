#include <stdio.h>
#include "metodo.h"


int main()
{
 char x[20] = { 0 };

 printf("x = [%s],longitud(x) = %d\n",x,longitud(x));

 concatenarCadena(x,"Hola");

 printf("x = [%s],longitud(x) = %d\n",x,longitud(x));

 concatenarCadena(x," que tal");

  printf("x = [%s],longitud(x) = %d\n",x,longitud(x));
    return 0;
}
