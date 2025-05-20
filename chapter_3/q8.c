#include <stdio.h>

int main(void)
{
    float x,y;

    printf("Enter the coordinates of x and y: ");
    scanf("%f %f", &x, &y);

    if (x== 0.00 && y == 0.00)
    {
        printf("Point is at origin\n");
    }
    else if(x==0.00 && y!=0.00 )
    {
        printf("Point it at X axis\n");
    }
        
    else if(x!=0.00 && y==0.00)
    {
        printf("Point is at Y axis\n");
    }
    else
    {
        printf("point is at coordinates: (%f, %f)", x,y);
    }
        
}