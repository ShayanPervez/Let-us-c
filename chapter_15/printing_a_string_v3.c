#include<stdio.h>

int main()
{
    char name[] = "Shayan";
    int i = 0;
    while (*(i+name))
    {
        printf("%p->%c\t", (void*)(i+name),*(i+name));
        i++;
    }
    printf("\n");
    return 0;
}