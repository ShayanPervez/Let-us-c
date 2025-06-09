//1. addition of a number to a pointer.
//2. Subtraction of a number from a pointer.
//3. Subtraction of one pointer from another.
//4. Comparision of two pointer.
#include<stdio.h>
int main()
{
    int arr[]= {10,20,30,45,67,56,74};
    int i=4,*j,*k,*x,*y;
    j = &i;
    printf("The value of j is the address of i which is : %d\n",j);
    j= j+9;
    printf("j+9 =%d, Here the calculation is 9* (size of int), which is 4 here.\n", j);
    k = &i;
    printf("The value of k is the address of i which is : %d\n",k);
    k = k-3;
    printf("k-3 =%d, Here the calculation is 3* (size of int), which is 4 here.\n", k);
    x = &arr[1];
    y = &arr[5];
    printf("%d\n", y-x);
    x = &arr[4];
    printf("The value of x is the address of 4th element of array arr : %d\n",x);
    k = (arr + 4);
    printf("%d\n",k);
    if (j==k)
        printf("The two pointers point to same location\n");
    else
        printf("The two pointers points to different location");
    return 0;
}
