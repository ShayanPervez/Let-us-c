#include<stdio.h>

// int main()
// {
//     char name[] ="Shayan";
//     printf("%s",name);
//     return 0;
// }

// scanf rule
// int main()
// {
//     char name[25];
//     printf("Enter your name");
//     scanf("%s", name);
//     printf("%s", name);
// }

// Scanf for receiving multi word string

int main()
{
    char name[25];
    printf("Enter your full name");
    scanf("%[^\n]s",name);
    printf("%s",name);
}