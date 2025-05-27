#include<stdio.h>

int fab(int);
int main()
{
    int n=0;
    for (int i =1; i<=25; i++)
    {
        printf("%d\n", fab(n));
        n++;
    }
    return 0;
}
int fab(int n)
{
    if (n==0 || n==1)
        return (n);
    else
        return (fab(n-1)+ fab(n-2));
}