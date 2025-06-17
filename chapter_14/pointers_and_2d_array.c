#include<stdio.h>

int main()
{
    int s[4][2] = {
        {1234,56},{1212,33},{1434,80},{1312,78}
    };
    int i;
    for (int i = 0; i < 3; i++)
    {
        printf("Address of %d th 1-D array = %u\n", i, s[i]);
    }
    return 0;
    
}