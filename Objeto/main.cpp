#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Cadena.h"

int main()
{
  Cadena* s = new Cadena("Hola, ");
  s-> concatenar(" que tal?");
  s-> concatenar(" Todo bien?");
  s-> concatenar(" Me alegra .");
  s-> concatenar( 100);
  printf("%s\n", s->toString());

  delete s;

    return 0;
}
