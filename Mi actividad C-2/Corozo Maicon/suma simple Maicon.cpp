int EsNumero(char *s)
{
    int i;
    for(i = 0; s[i] != 0; i++)
    {
        if(s[i] < '0' || s[i] > '9')
            return 0;
    }
    return 1;
}
