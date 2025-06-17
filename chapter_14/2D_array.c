#include<stdio.h>
int main()
{
    int stud[4][2];
    int i,j;
    for (i = 0; i <=3; i++)
    {
        printf("Enter roll number and marks: ");
        scanf("%d %d", &stud[i][0], &stud[i][1]);
    }
    for (j = 0; j <=3; j++)
    {
        printf("%d %d\n", stud[j][0], stud[j][1]);
    }
    return 0; 
    
}