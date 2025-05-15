#include<stdio.h>
#include<math.h>

int main(void)
{
    float v, t, wcf;
    scanf("%f %f", &v, &t);
    wcf = 35.74 + 0.6215 *t + (0.4275 * t - 35.75) * pow(v , 0.16);
    printf("%f",wcf);
}