#include<stdio.h>
int sum(int);

int main()
{
    int total_sum = sum(25);
    printf("Sum of first 25 natural number is: %d", total_sum);
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n-1);
    }
}