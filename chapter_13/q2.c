#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,*p;
    printf("Enter the array size: ");
    scanf("%d", &max);
    p = (int *)malloc(max*sizeof(int));
    for (int i=0; i<max; i++)
    {
        scanf("%d",&p[i]);
    }
    for (int i=0; i<max/2; i++)
    {
        if(p[i]==p[max-1-i])
            printf("arr[%d]= arr[%d-%d]\n", i, max-1,i );
        else
            printf("Value at %d is not equal to value at %d\n",i, max-1-i);
    }
    free(p);
    return 0;
    
}