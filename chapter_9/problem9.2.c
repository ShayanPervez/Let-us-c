#include<stdio.h>

void power_fact(float, int , int , float *, int *);
int main()
{
    float a, pow;
    int b,num, fact;
    printf("For a raise to b enter the value of a and b: ");
    scanf("%f %d", &a, &b);
    printf("Enter the number to find factorial of: ");
    scanf("%d", & num);
    power_fact(a, b, num, &pow, &fact);
    printf("Power = %f, Factorial = %d", pow, fact);

}

void power_fact(float x, int y, int num, float *pow, int *fact)
{
    float res = 1;
    int i;
    for (i = 1; i<=y; i++)
        res = res*x;
    *pow = res;
    res =1;
    for (i =1;i<=num; i++)
        res = res*i;
    *fact = res;
}