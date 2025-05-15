#include<stdio.h>

int main()
{
    float temp, temp_celcius;
    printf("Please enter the City temperature in Farenheit: ");
    scanf("%f", &temp);

    temp_celcius = temp - 32;

    printf("The tem[perature in celcius is: %f", temp_celcius);
}