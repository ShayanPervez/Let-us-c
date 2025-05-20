#include<stdio.h>

int main(void)
{
    float angle_a, angle_b, angle_c;
    printf("Enter the 3 angles of a triangle");
    scanf("%f %f %f", &angle_a, &angle_b, &angle_c);
    if (angle_a+ angle_b+ angle_c == 180.00)
    {
        printf("The given angle makes a triangle");
    }
    else
    {
        printf("The sum of the angle should be 180 degress which is not happening in this case");
        
    }
}