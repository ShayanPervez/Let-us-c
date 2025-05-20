#include<stdio.h>

int main()
{
    int ram, shyam, ajay;
    printf("Enter the age of Ram, Shyam, Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram < shyam)
    {
        if(ram < ajay)
        {
            printf("Ram is the youngest\n");
        }
        else
        {
            printf("Ajay is the youngest");
        }
    }
    else
    {
        if (shyam < ajay)
            printf("Shyam is the youngest");
        else
            printf("Ajay is the youngest");
    }
    return 0;
}