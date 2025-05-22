#include<stdio.h>

int main()
{
    int i=1;

    while(i<=500)
    {
        int temp = i;
        int d3 = temp%10;
        temp = temp/10;
        int d2 = temp%10;
        temp = temp/10;
        int d1 = temp;
        if(i == (d3*d3*d3 + d2*d2*d2 + d1*d1*d1))
            printf("%d Armstrong number\n",i);
        else
            printf("%d Not an Armstrong number\n", i);
        i++;

    }
}