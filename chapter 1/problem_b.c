#include<stdio.h>

int main(void)
{
    float length, breadth, radius, area_of_rectangle, area_of_circle, circumfrence;
    float pie = 3.14;

    printf("Length, Breadth, Radius: Please enter the values:: ");
    scanf("%f %f %f", &length, &breadth, &radius);
    area_of_rectangle = length * breadth;
    area_of_circle = 2 * pie * radius;

    circumfrence = 2 * pie* radius;

    printf("Area of Rectangle: %f\n", area_of_rectangle);
    printf("Area of Circle: %f\n", area_of_circle);
    printf("Circumfrence: %f\n", circumfrence);
}