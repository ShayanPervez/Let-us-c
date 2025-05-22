#include<stdio.h>

int main()
{
    float fact, sum=0.0;
    for(int i =1; i<=7; i++)
    {
        fact = 1.0;
        for (int j= 1; j<=i; j++)
        {
            fact = fact * j;
        }
        sum = sum + i/fact;
    }
    printf("Sum of series= %f\n",sum);
    return 0;

}