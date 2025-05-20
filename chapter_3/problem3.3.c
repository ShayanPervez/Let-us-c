#include<stdio.h>
int main()
{
    int yr;
    printf("\n Enter a year:");
    scanf("%d", &yr);
    if (yr %100 ==0)
    {
        if(yr %400 ==0)
            printf("Leap Year\n");
        else
            printf("not leap year");
    }
    else
    {
        if (yr % 4 == 0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("not a leap year");
        }
    }

}