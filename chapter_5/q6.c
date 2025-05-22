#include<stdio.h>

int main()
{
    int n, first, second, range;
    printf("How many numbers you want to find range of: ");
    scanf("%d", &n);

    while(n != 0)
    {
        printf("Enter the first number: ");
        scanf("%d", &first);

        printf("\nEnter the second number: ");
        scanf("%d", &second);

        if (first> second)
        {
            range = first - second;
        }
        else
        {
            range = second - first;
        }
        printf("\nthe range is %d\n", range);
        n--;
    
    }
}