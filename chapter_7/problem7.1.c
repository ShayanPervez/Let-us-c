#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,i , num, fact;
    while(1)
    {
        printf("\n1.Factorial\n");
        printf("2.Prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");
        printf("Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number: ");
                scanf("%d",&num);
                fact = 1;
                for (i=1; i<=num; i++)
                {
                    fact = fact*i;
                }
                printf("The factorial for %d is %d\n", num, fact);
                break;
            case 2:
                printf("Enter the number: ");
                scanf("%d",&num);
                for(i =2 ; i<num; i++)
                {
                    if (num % i ==0)
                    {
                        printf("not a prime\n");
                        break;
                    }
                }
                if (i == num)
                    printf("Prime\n");
                break;
                
            case 3:
                printf("Enter the number: ");
                scanf("%d",&num);
                if (num % 2 == 0)
                    printf("Even Number\n");
                else
                    printf("odd number\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice\n\n");


        }
    }
    return 0;
}