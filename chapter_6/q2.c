#include<stdio.h>

int main()
{
    // i = 2 + (y + 0.5x)
    float i;
    for (int y = 1; y<=6; y++)
    {
        for(float x = 5.5; x<=12.5; x= x+0.5)
        {
            i = 2 + (y + 0.5 *x);
            printf("%d %.1f %.2f\n", y, x, i );
        }
    }
    return 0;
}