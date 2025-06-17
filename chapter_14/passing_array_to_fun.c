#include<stdio.h>

void display(int [][4], int, int);

int main()
{
    int a[3][4] = {
        1,2,3,4,
        5,6,7,8,
        9,10,11,12
    };
    display(a,3,4);
    return 0;
}

void display(int arr[][4],int row, int col)
{
    int i,j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
            
    }
    
}