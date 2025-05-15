#include<stdio.h>
#include<math.h>

int main(void)
{
    float a, b,c,sp, area;
    printf("Enter the value of sides a, b, c");
    scanf("%f %f %f", &a, &b, &c);

    sp = (a+b+c)/2;
    area = sqrt(sp * (sp-a) * (sp-b) * (sp-c));

    printf("Area: %f", area);

}