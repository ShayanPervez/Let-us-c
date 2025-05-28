#include<stdio.h>

void bin_eq_recursion(int);
int bin_eq_non_recursion(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Binary: 0\n");
    }
    else {
        printf("Binary equivalent without recursion: %d ", bin_eq_non_recursion(num));
        printf("\n");
        
        printf("Binary equivalent with recursion: ");
        bin_eq_recursion(num);
    }

    return 0;
}

int bin_eq_non_recursion(int num)
{
    int binary=0, place=1;
    
    while (num >0)
    {
        int remainder = num%2;
        binary += remainder*place;
        place *= 10;
        num = num/2;
    }
    return (binary);
}

void bin_eq_recursion(int num)
{
    if (num == 0)
    {
        return;
    }
    bin_eq_recursion(num/2);
    printf("%d", num % 2);
}