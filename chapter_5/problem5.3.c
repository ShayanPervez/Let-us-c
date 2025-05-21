#include<stdio.h>

int main()
{
    float x, pow;
    int y,i;
    printf("\n Enter the two numbers: ");
    scanf("%f %d", &x,&y);
    pow = i = 1;
    while(i<=y)
    {
        pow = pow * x;
        i++;
    }
    printf("%f to the power %d is %f\n",x,y,pow);

}