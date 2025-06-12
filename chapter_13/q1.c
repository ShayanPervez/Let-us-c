#include<stdio.h>
void count_all(int[], int, int *, int *, int *, int *);

int main()
{
    int arr[25];
    int pos, neg, even, odd;
    printf("Enter the elements of array whose length is 25");
    for (int i=0; i<25; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_all(arr, 25,&pos, &neg, &even, &odd);
    printf("Positive: %d, Negative: %d, Even: %d, Odd: %d\n", pos, neg, even, odd);
    
}

void count_all(int arr[], int size, int *pos, int *neg, int *even, int *odd)
{
    *pos = *neg = *even = *odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            (*pos)++;
        else if (arr[i] < 0)
            (*neg)++;

        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}
