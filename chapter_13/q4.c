#include<stdio.h>
void printArray(int [], int);
void insertion_sort(int [], int);

int main()
{
    int arr[] = {6,5,4,2,12,6,42,17,25,32,15,1,7,9,45,13,52,98,18,16,33,0,56,4,87};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, len);
    printArray(arr, len);
    return 0;
}

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp =arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] =temp; 
                
    }   
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}