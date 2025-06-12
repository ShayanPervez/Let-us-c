#include<stdio.h>
#include<math.h>
float dist_calculation(float [], float []);

int main()
{
    float X[10];
    float Y[10];
    printf("Enter the value of X: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &X[i]);
    }
    printf("Enter the value of Y: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &Y[i]);
    }
    float op = dist_calculation(X,Y);
    printf("Distance between first and last point is %f", op);

    return 0;
}

float dist_calculation(float X[], float Y[])
{
    return (sqrt(((X[9]-X[0])*(X[9]-X[0])) + ((Y[9]-Y[0])*(Y[9]-Y[0]))));
}