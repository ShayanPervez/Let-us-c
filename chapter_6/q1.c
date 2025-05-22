#include<stdio.h>

int main()
{
    int num,temp=1;
    printf("Enter the number you want table for: ");
    scanf("%d", &num);
    for (int i =1 ;i<=10; i++)
    {
        temp = num*i;
        printf("%d * %d = %d\n", num,i,temp);        
    }
}