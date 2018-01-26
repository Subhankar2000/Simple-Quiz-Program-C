// Custom string function to extract a part of string
void stringExtract(char *dest, char *source, int sp, int ep)
{
    int s=0,i;
    for(i=sp ; i<=ep; i++)
    {
        *(dest+s) = *(source+i);
        s++;
    }
    *(dest+s) = '\0';
}


// Custom string function to find the character at position p in string str
char charAt(int p, char *str)
{
    int i = 0;
    while(*(str+i) != '\0')
    {
        if(p == i)
           return *(str+i);
        i++;
    }
    return '\0';
}


