#include<stdio.h>
#include<math.h>

int main()
{
    int n,q;
    float p, r,a;
    for (int i = 1; i<=10; i++)
    {
        printf("Enter the principal amount: ");
        scanf("%f", &p);

        printf("Enter the rate of interest: ");
        scanf("%f", &r);
        r = r/100;

        printf("Enter the number of years: ");
        scanf("%d", &n);

        printf("Enter the value how many times interest compounds: ");
        scanf("%d", &q);
        
        a= p * (pow((1+ (r/q)),(n*q)));
        printf("The compounded amount is %f\n",a);
        
    }
}