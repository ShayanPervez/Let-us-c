#include<stdio.h>

int main()
{
    int n=1, i;
    printf("\n Prime numbers between 1 and 300 are:\n1\t");
    for(n =1; n<=300;n++)
    {

        for (i=2; i<=n; i++)
        {
            if (n % i ==0)
                break;
        }
        if (n == i)
            printf("%d\t",n);
    }
    return 0;

}