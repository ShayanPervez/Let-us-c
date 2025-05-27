#include<stdio.h>

void weight_conv(float, float*, float*, float*);
int main()
{
    float kg, grams, tons, pounds;
    printf("Enter the weight in kg: ");
    scanf("%f", &kg);
    weight_conv(kg, &grams, &tons, & pounds);
    printf("The converted weight for %f kg are %f grams, %f tons, %f pounds", kg, grams, tons, pounds);
    return 0;
}

void weight_conv(float kg, float *grams, float *tons, float *pounds)
{
    *grams = 1000*kg;
    *tons = kg/1000;
    *pounds = kg * 2.20462;
}