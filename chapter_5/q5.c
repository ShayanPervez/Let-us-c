#include<stdio.h>

int main()
{
    int decimal, remainder, i=0;
    int octal[100];

    printf("Enter the decimal number: ");
    scanf("%d", &decimal);

    int temp = decimal;

    if (decimal == 0)
    {
        printf("Octal Equivalent\n");
        return 0;
    }

    while(temp != 0)
    {
        remainder = temp % 8;
        octal[i] = remainder;
        temp = temp/8;
        i++;
    }
    printf("Octal equivalent %d is: ", decimal);
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
    return 0;    
}