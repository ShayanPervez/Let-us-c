#include<stdio.h>
int main()
{
    int num[] = {12,4,5,1,9,13,11,19,54,34};
    int i,t;
    int n = sizeof(num)/sizeof(num[0]);
    for (i=0; i<=n-1;i=i+2)
    {
        t = num[i];
        num[i] = num[i+1];
        num[i+1] = t;
    }
    for (i=0; i<=n-1;i++)
        printf("%d\t",num[i]);
    return 0;
}