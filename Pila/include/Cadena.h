
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Cadena
{
    //variable de instancia
   private: char* cad;

   //Constructor
   public: Cadena(const char* cadInicial)
   {
     cad = (char*) malloc(sizeof(char)*strlen(cadInicial)+1);
     strcpy(cad, cadInicial);
   }

   //destructor
   public: ~Cadena()
   {
      free(cad);
   }
   //metodos
  public: Cadena* concatenar(const char* cadConcat)
  {
    int size= strlen(cad)+strlen(cadConcat)+1;
    char* aux= (char*) malloc(sizeof(char)*size);
    strcpy(aux, cad);
    strcat(aux, cadConcat);
    cad =aux;

    return this;
  }

  public: void concatenar(int n)
  {
      char sNum[10];
      itoa(n,sNum,10);
      concatenar(sNum);
  }

  public: char* toString()
  {
      return cad;
  }

};



