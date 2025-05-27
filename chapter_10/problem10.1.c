#include<stdio.h>

int rsum(int);
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = rsum(num);
    printf("Sum of the digits id %d\n",sum);
    return 0;
}

int rsum(int n)
{
    int s, remainder;
    if (n != 0)
    {
        remainder = n %10;
        s = remainder + rsum(n/10);
    }
    else
    {
        return 0;
    }
    return (s);
}