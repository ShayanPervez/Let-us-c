#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x;
    printf("Enter the number to get absolute value of: ");
    scanf("%d",&x);

    printf("Absolute value of %d is %d\n", x, abs(x));
}