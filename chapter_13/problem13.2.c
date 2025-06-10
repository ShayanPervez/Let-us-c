#include<stdio.h>

int main()
{
    int j,i,arr[5], arr1[5];
    printf("\n Enter the 5 element of array:\n");
    for (i=0; i<=4;i++)
        scanf("%d", &arr[i]);
    for (i =0, j=4; i<=4;i++,j-- )
        arr1[j] = arr[i];
    for (i=0; i<=4;i++)
        printf("%d\t",arr1[i]);
    return 0;
}