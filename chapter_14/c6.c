#include<stdio.h>

// Function declarations
void add(int arr1[][6], int arr2[][6], int result[][6], int rows, int cols);
void mul(int arr1[][3], int arr2[][3], int result[][3], int rows, int cols);

int main()
{
    int choice;

    printf("Enter 1 for Addition (6x6 matrices) or 2 for Multiplication (3x3 matrices): ");
    scanf("%d", &choice);

    if(choice == 1)  // Addition
    {
        int arr1[6][6], arr2[6][6], result[6][6];
        printf("Enter first 6x6 matrix:\n");
        for(int i = 0; i < 6; i++)
            for(int j = 0; j < 6; j++)
                scanf("%d", &arr1[i][j]);

        printf("Enter second 6x6 matrix:\n");
        for(int i = 0; i < 6; i++)
            for(int j = 0; j < 6; j++)
                scanf("%d", &arr2[i][j]);

        add(arr1, arr2, result, 6, 6);

        printf("Resultant Matrix after Addition:\n");
        for(int i = 0; i < 6; i++)
        {
            for(int j = 0; j < 6; j++)
                printf("%d ", result[i][j]);
            printf("\n");
        }
    }
    else if(choice == 2)  // Multiplication
    {
        int arr1[3][3], arr2[3][3], result[3][3] = {0};
        printf("Enter first 3x3 matrix:\n");
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                scanf("%d", &arr1[i][j]);

        printf("Enter second 3x3 matrix:\n");
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                scanf("%d", &arr2[i][j]);

        mul(arr1, arr2, result, 3, 3);

        printf("Resultant Matrix after Multiplication:\n");
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
                printf("%d ", result[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function to add two matrices
void add(int arr1[][6], int arr2[][6], int result[][6], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            result[i][j] = arr1[i][j] + arr2[i][j];
}

// Function to multiply two matrices
void mul(int arr1[][3], int arr2[][3], int result[][3], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            result[i][j] = 0;
            for(int k = 0; k < cols; k++) // Matrix multiplication logic
                result[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
}
