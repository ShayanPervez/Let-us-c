#include<stdio.h>

int main(void)
{
    double weight, height, BMI;
    printf("Enter your weight : ");
    scanf("%lf", &weight);
    printf("Enter your height: ");
    scanf("%lf", &height);
    BMI = weight / (height*height);
    if(BMI < 15)
    {
        printf("Starvation");
    }
    else if(BMI>=15.1 && BMI<=17.5)
    {
        printf("Anorexic");
    }
    else if (BMI>=17.6 && BMI<=18.5)
    {
        printf("Underweight");
    }
    else if (BMI>= 18.6 && BMI<=24.9)
    {
        printf("Ideal");
    }
    else if(BMI>=25)
    {
        printf("Overweight");
    }
    else if (BMI>=30)
    {
        printf("Obese");
    }
    else if (BMI>=40)
    {
        printf("Morbidly Obese");
    }
}