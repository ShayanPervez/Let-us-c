#include<stdio.h>

void circular_shift(int*, int*, int*);

int main()
{
    int x=5,y=8,z=10;
    printf("Before shift:  x = %d, y = %d, z = %d\n", x, y, z);
    circular_shift(&x,&y,&z);
    printf("After shift:  x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}

void circular_shift(int *x, int *y, int *z)
{
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp; 
}