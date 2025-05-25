#include<stdio.h>

int romanize(int, int, char);
int main()
{
    int yr;
    printf("\n Eneter the year: ");
    scanf("%d", &yr);

    yr = romanize(yr, 1000, 'm');
    yr = romanize(yr, 500, 'd');
    yr = romanize(yr, 100, 'c');
    yr = romanize(yr, 50, 'l');
    yr = romanize(yr, 10, 'x');
    yr = romanize(yr, 5, 'v');
    yr = romanize(yr, 1, 'i');
    return 0;
}

int romanize(int y, int k, char ch)
{
    int i,j;
    j = y/k;
    for (i=1; i<=j; i++)
        printf("%c", ch);
    return(y % k);
}