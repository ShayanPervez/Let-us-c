#include<stdio.h>

int main()
{
    int n;
    printf("\n Enter any number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number entered is odd");
    }
}