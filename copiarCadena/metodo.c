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
