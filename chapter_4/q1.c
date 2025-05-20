#include<stdio.h>

int main(void)
{
    float s1, s2, s3;
    printf("Enter the sides of the triangle");
    scanf("%f %f %f", &s1, &s2, &s3);

    if(s1== s2 && s2 == s3)
    {
        printf("Equilateral Triangle");
    }
    else if (s1 == s2 || s2 == s1 || s1== s3)
    {
        printf("Isoceles Triangle");
    }
    else
    {
        float a=s1, b= s2, c= s3;
        if(a>b && a>c)
        {
            c = s1; a = s2; b = s3;
        }
        else if (b>a && b>c)
        {
            c = s2; a = s1; b = s3;
        }
        else
        {
            a= s1; b=s2; c= s3;
        }
        
        if ((a*a + b*b) == c*c)
        {
            printf("Right Angled Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
}