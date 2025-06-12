#include<stdio.h>
#include<math.h>

float area (float, float,float);

int main()
{
    float a[] = {137.4,155.2,149.3,160.0,155.6,149.7};
    float b[]= {80.9,92.6,97.93,100.25,68.95,120.0};
    float angle[]= {0.78,0.89,1.35,9.00,1.25,1.75};
    float op;
    for (int i=0; i<=5;i++)
    {
        op =area(a[i],b[i],angle[i]);
        printf("The area with side %f as a , %f as b and %f as angle is %f\n",a[i],b[i],angle[i] ,op);
    }
    return 0;
}

float area(float a, float b, float angle)
{
    float area;
    area = 0.5*a*b*sin(angle);
    return area;
}