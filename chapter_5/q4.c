#include<stdio.h>

int main()
{
    int n ,count_positive=0, count_negative=0, count_zeros=0;
    float num;
    printf("Enter the number of elements you want to enter");
    scanf("%d", &n);

    while(n>0)
    {
        printf("Enter the number you want: ");
        scanf("%f", &num);
        if (num >0)
            count_positive++;
        else if(num <0)
            count_negative++;
        else if (num == 0)
            count_zeros++;
        n--;
    }
    printf("Postive number count is %d\n", count_positive);
    printf("Negative number count is %d\n", count_negative);
    printf("Zeros number count is %d\n", count_zeros);
}