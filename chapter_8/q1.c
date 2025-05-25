#include<stdio.h>
#include <stdbool.h>

bool leap_year(int);

int main()
{
    int year, check;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (leap_year(year) == 1)
        printf("Leap Year");
    else
        printf("Not leap year");   
    return 0;
}

bool leap_year(int yr)
{
    if (yr % 4 == 0 && yr % 100 !=0 || yr % 400 ==0)
        return true;
    return false;
}