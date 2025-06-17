#include<stdio.h>
void left_shift(int [][5], int, int);

int main()
{
    int arr[4][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20}
    };

    left_shift(arr, 4,5);
    return 0;
}

void left_shift(int a[4][5],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int temp1 = a[i][0];
        int temp2 = a[i][1];
        for (int j = 0; j < col-2; j++)
        {
            a[i][j] = a[i][j+2];
        }
        a[i][col-2] = temp1;
        a[i][col-1] = temp2;
    }
    printf("The left shifted array is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
        
    }
    
    
}