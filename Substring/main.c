#include <stdio.h>
#include <stdlib.h>
#include "metodos.h"



int main()
{
    char *x= "    Esto es una cadena    ";

    printf("%s\n",trim(x));
    printf("%s\n",x);

    return 0;
}

