#include<stdio.h>

int main()
{
    int mat1[3][5] = {
        1,2,3,4,5,
        6,7,8,9,10,
        11,12,13,14,15
    };

    int mat2[5][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat2[j][i] = mat1[i][j];
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}