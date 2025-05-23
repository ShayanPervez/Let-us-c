#include<stdio.h>

int main()
{
    int num=1;
    for (int row = 0; row<4; row++)
    {
        for (int col = 0; col<7; col++)
        {
            if (col >= 3-row && col <= 3+row && (col - (3 - row))% 2 ==0)
            {
                printf("%d", num++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}