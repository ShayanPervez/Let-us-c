#include<stdio.h>
int main()
{
    int num[] = {24,34,12,44,56,17};
    int i, *ptr;
    ptr = &num[0];
    for (i = 0; i <=5; i++)
    {
        printf("address = %u and element = %d\n", ptr, *ptr);
        ptr++;
    }
    return 0;    
}