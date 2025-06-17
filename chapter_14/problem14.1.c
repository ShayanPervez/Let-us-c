#include<stdio.h>

int main()
{
    int a[5][5] = {
        {11,1,7,9,7},
        {13,54,56,2,5},
        {23,43,89,22,13},
        {14,15,17,16,19},
        {45,3,6,8,10}
    };

    int i,j,big;
    big = a[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j]> big)
            {
                big = a[i][j];
            }
            
        }
        
    }
    printf("Biggest number in the given array is %d", big);
    return 0;
    
    
}