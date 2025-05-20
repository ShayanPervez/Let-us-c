#include<stdio.h>

int main(void)
{
    float l , b , area, perimeter;
    printf("Enter length and breadth of a rectangle");
    scanf("%f %f", &l, &b);
    area = l*b;
    perimeter = 2*(l+b);
    if (area > perimeter)
    {
        printf("area is greater than perimeter");
    }
    else if(area < perimeter)
    {
        printf("Area less tahn perimeter");
    }
    else
    {
        printf("Area equal to perimeter");
    }
}