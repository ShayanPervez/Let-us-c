#include<stdio.h>
int fact(int);
int main(void)
{
    int num;
    int factorial;
    printf("\n Enter the number\n");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of %d = %d\n", num, factorial);
}

int fact(int num)
{
    int factorial=1;
    for (int i = 1; i<num; i++)
        factorial = factorial*i;
    return (factorial);
}