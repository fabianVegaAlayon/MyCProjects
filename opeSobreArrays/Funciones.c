#include <stdio.h>
int agregar(int a[],int* len,int v) // devolvera la posicion en la que se agrego a v
{
  a[*len] = v;
  *len +=1;
  return *len - 1;

}

/*int buscar(int arr[],int len,int e)
{
    int i = 0;

    while(i<len && arr[i]!=e)
    {
        i+=1;
    }

    return i<len?i:-1;
}*/

int buscar(int arr[],int len,int e) //retorna la posicion
{                                   // en la cual el array contiene
     int i;                         // el elemento buscado

     for(i = 0; i<len && arr[i]!=e; i++);

     return i<len?i:-1;
}



int buscarYAgregar(int a[],int* len, int e, int* enc)
{
    int pos = buscar(a,*len,e);

    if(pos >=0)
    {
        *enc = 1;
    }else
         {
             *enc = 0;

             pos=agregar(a,len,e);
         }
    return pos;

}

void inicializarContadores(int a[])
{
 for(int i = 0;i<100;i++)
 {
     a[i] = 0;
 }
}
void mostrarResultados(int aNum[],int len,int aCont[])
{
    for(int i=0;i<len;i++)
    {
        printf("%d aparece %d veces\n",aNum[i],aCont[i]);
    }
}

void insertar(int a[],int* len, int e,int pos)
{
    for(int i=*len;i>pos;i--)
    {
        a[i] = a[i-1];
    }

    a[pos] = e;
    *len +=1;
}

void eliminar(int a[],int* len,int pos)
{
    for(int i = pos;i<*len-1;i++)
    {
        a[i] = a[i+1];
    }
   *len-=1;
}
int insertarEnOrden(int a[],int* len,int e)
{
    int i = 0;

    while(i<*len&& a[i]<=e)
    {
        i+=1;
    }
    insertar(a,len,e,i);

    return i;

}

int buscaEnOrden(int a[],int len,int v,int* enc)
{
    int i = 0;
    while(i<len && a[i]< v)
    {
        i+=1;

    }

    *enc = i<len;
    return i;
}

int buscarEInsertarEnOrden(int a[], int* len,int v,int* enc)
{

 int pos = buscaEnOrden(a,*len,v,enc);

 if(!*enc)
    {
        insertarEnOrden(a,len,v);
    }
  return pos;
}


void ordenar(int arr[],int len)//burbuja
{
    int ordenado = 0;
        while(!ordenado)
        {
         ordenado = 1;
            for(int i =0;i<len-1;i++)
            {
               if(arr[i]>arr[i+1])
                {
                     int aux = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = aux;
                    ordenado = 0;
                }

            }

        }
}

int busquedaBinaria(int a[],int len,int e,int *enc)
{
    int i = 0;
    int j = len - 1;
    int k = (i + j) /2;
    int encontrado = 0;

    while(!encontrado &&  i<=j)
    {
        if(a[k]>e)
        {
            j = k-1;
        }else
            {
                if(a[k]<e)
                {
                    i = k+1;
                }else
                     {
                         encontrado = 1;
                     }
            }
            k = (i + j) /2;
    }
    *enc  = encontrado;
    return e<=a[k]?k:k+1;
}




int  esMaysucula(char c)
{
  return c>='A' && c<= 'Z';  
}

void aMinuscula(char c)
{
   esMayor(c)? c-A+a:c; 
} 



void insertarIdx(IdxIdemp a[], int* len, IdxIdEmp v, int pos)
{
  int i;
  for( int i = *len; i > pos; i-- )
  {
    a[i] = a[i - 1];
  }
  a[pos] = v;
  *len = *len + 1;
}

int insertarIdxEnOrden(IdxIdEmp a[], int* len, IdxIdEmp v)
{
  int i = 0;
  while( i < *len && a[i].idEmp <= v.idEmp )
  {
    i = i + 1;
  }
  insertarIdx(a, len, v, i);
  return i;
}

int indexar(FILE* f, IdxIdEmp indice[])
{
  int len = 0;
  IdxIdEmp rIdx;
  int reg;

  leerInt(f, &reg);
  while( !feof(f) )
  {
    rIdx.idEmp = reg.idEmp;
    rIdx.posicion = len;
    insertarIdxEnOrden(indice, &len, rIdx);

    leerInt(f, &reg);
  }
  return len;
}


