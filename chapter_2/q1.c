#include<stdio.h>

int main(void)
{
    int n, d5, d4, d3 ,d2, d1, sum;
    printf("Enter the number less than 32767: ");
    scanf("%d", &n);

    d5 = n % 10;
    n = n/10;
    d4 = n % 10;
    n = n/10;
    d3 = n % 10;
    n = n/10;
    d2 = n %10;
    n = n/10;
    d1 = n%10;
    sum = d5 + d4 + d3 + d2 + d1;
    printf("The sum of the digits is : %d", sum);
    
}