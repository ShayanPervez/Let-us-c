#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double angle_degree;
    printf("Enter the angle: ");
    scanf("%lf", &angle_degree);

    double angle_radians = angle_degree * PI / 180.0;

    double result = sin(angle_radians) * sin(angle_radians) + 
                    cos(angle_radians) * cos(angle_radians);

    if (fabs(result - 1.0) < 1e-9)
        printf("Sin and cos square is equal to one\n");
    else
        printf("Condition not satisfied\n");

    return 0;
}
