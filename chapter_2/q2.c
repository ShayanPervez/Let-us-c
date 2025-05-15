#include<stdio.h>
#include<math.h>

int main(void)
{
    float x,y, r ,theta, z;

    printf("Enter the cartesian coordinate (x,y): ");
    scanf("%f %f", &x, &y);

    printf("Convering to polar coordinates....\n ");
    r = sqrt(x*x + y*y);
    z = y/x;
    theta = atan(z);
    printf("The polar coordinates are (%f , %f)", r, theta);
}