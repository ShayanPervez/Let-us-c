#include<stdio.h>
#include "interest.h"

int main()
{
    int principal, time;
    float rate, si;

    printf("Enter the details of Simple Interest\n");
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter the time: ");
    scanf("%d",&time);
    si = SI(principal, rate,time);
    printf("Simple interest is %f", si);
    return 0;
}