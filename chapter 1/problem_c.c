#include<stdio.h>

int main(void)
{
    int width = 841, height = 1189;
    for(int i = 0; i<9; i++)
    {
        printf("A[%d] ---> width: %d, height: %d\n", i, height, width);
        int temp = height;
        height = width;
        width = temp/2;
    }
}