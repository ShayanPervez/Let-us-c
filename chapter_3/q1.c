#include<stdio.h>

int main(void)
{
    int n,rev=0, remainder;
    printf("Enter a 5 digit number: ");
    scanf("%d", &n);
    if (n < 10000 || n>99999)
    {
        printf("Please enetr 5 digit number\n");
    }
    int original = n;
    while(n!=0)
    {
        remainder= n % 10;
        rev = rev*10 + remainder;
        n = n/10;
    }
    printf("Reverse number is %d\n",rev);
    if (rev == original)
    {
        printf("Reversed number is equal to the given number\n");
    }
    else
    {
        printf("Reversed number is not equal to the given number\n");
    }
}