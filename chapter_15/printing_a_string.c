#include<stdio.h>

int main()
{
    char name[] = "Shayan";
    int i=0;
    while (name[i] !='\0')
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    return 0;
    
}