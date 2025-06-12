#include<stdio.h>
int smallest_number_in_array(int *, int);

int main()
{
    int arr[] = {6,5,4,2,12,6,42,17,25,32,15,1,7,9,45,13,52,98,18,16,33,0,56,4,87};
    int len = sizeof(arr)/sizeof(arr[0]);
    int output = smallest_number_in_array(arr,len);
    printf("The smallest number in array is %d\n", output);
    return 0;
}

int smallest_number_in_array(int *n, int size)
{
    int min = n[0];
    for (int i = 0; i < size; i++)
    {
         if (n[i]<min)
         {
            min = n[i];
         }      
    }
    return min;
    
}