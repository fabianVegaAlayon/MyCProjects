int longitud(char t[])
{
    int i = 0;

    while(t[i] != '\0')
    {
        i += 1;
    }
    return i;
}

void copiarCadena(char t[],char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        t[i] = s[i];
         i += 1;
    }
    t[i] = '\0';
}

int esVacia(char s[])
{
  return s[0] == '\0';
}

void concatenarCadena(char t[],char s[])
{
 int i = 0;

 int j = longitud(t);

   while(s[i] !='\0')
   {
    t[j] = s[i];
    j += 1;
    i += 1;
  }

  t[j] = '\0';

}
