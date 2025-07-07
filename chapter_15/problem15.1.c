#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[20], substr[20];
    char *s,*p;
    int pos,n,i;
    printf("Enter the string: ");
    scanf("%s", &str);
    printf("Enter the position and number of characters to extract");
    scanf("%d %d",&pos, &n);
    s = str;
    p = substr;
    if (pos<0 || pos>strlen(str))
    {
        printf("Enter the correct postion value");
        exit(1);
    }
    if(n<0)
        n=0;
    if (n>strlen(str))
        n = n - strlen(str) - 1;
    s = s+pos;
    for (i = 0; i < n; i++)
    {
        *p = *s;
        s++;
        p++;
    }
    *p = '\0';
    printf("The substring is: %s",substr);
    
    
    
}