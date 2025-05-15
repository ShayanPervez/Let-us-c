#include<stdio.h>
#include<math.h>

int main(void)
{
    float angle;

    printf("Enter the angle: ");
    scanf("%f", &angle);

    printf("%f %f %f", sin(angle), cos(angle), tan(angle));
}