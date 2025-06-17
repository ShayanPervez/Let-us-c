#include<stdio.h>

int main()
{
    int n, isSymmetric=1;
    printf("Enter the size n of square matrics nxn: ");
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(arr[i][j] != arr[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
    {
        printf("Metrix is symmetric");
    }
    else
    {
        printf("Not symmetric");
    }
    
    

    
    
}