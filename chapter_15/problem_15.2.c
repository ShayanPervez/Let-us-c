#include<stdio.h>
int main()
{
    char str[6];
    int num=0,i;
    printf("Enter a string containing number");
    scanf("%s",str);
    for (i = 0; str[i]; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            num = num *10 +(str[i]-48);
        }
        else
        {
            printf("Not a valid string\n");
            return 1;
        }
        
    }
    printf("The number is: %d\n",num);
    return 0;
    
}