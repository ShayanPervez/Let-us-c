#include<stdio.h>
void xstrcpy(char *, char *);

int main()
{
    char source[] = "Shayan", target[20];
    xstrcpy(target,source);
    printf("Source string= %s\n",source);
    printf("target string = %s\n",target);
    return 0;
}

void xstrcpy(char *t, char *s)
{
    while (*s !='\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
    
}