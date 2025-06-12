#include <stdio.h>
void modify(int [], int);
int main()
{
    int arr[] = {20,25,15,2,6,7,8,1,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    modify(arr, len);
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}

void modify(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 3;
    }

}