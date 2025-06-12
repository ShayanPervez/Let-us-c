#include<stdio.h>
#include<math.h>

int main()
{
    float x[] = {34.22,39.87,41.85,49.23,40.06,53.29,53.29};
    float y[] = {102.43, 100.93,97.43,97.81,98.32,98.32,100.07};
    float a=0,b=0,c=0,d=0,e=0,r;
    float n = 7.0;
    for (int i = 0; i < 7; i++)
    {
        a += (x[i]*y[i]);
        b+= x[i];
        c+= y[i];
        d += x[i]*x[i];
        e += y[i]*y[i];
    }
    r = (a - (b * c) / n) / sqrt((d * n - b * b) * (e * n - c * c));
    printf("The solution is %f", r);
    return 0;    
}