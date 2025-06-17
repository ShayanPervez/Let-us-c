#include<stdio.h>

int main()
{
    int threed[3][2][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d",&threed[i][j][k]);
            }
            
        }
        
    }
    printf("\nElements in the 3D array are:\n");
    for (int i = 0; i < 3; i++)       
    {
        for (int j = 0; j < 2; j++)   
        {
            for (int k = 0; k < 3; k++) 
            {
                printf("%d ", threed[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\nfirst and last element in the array are: %d and %d\n", threed[0][0][0],threed[2][1][2]);
    
}