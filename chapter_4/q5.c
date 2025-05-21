#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122)
        printf("The character is lower cased");
    else if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
        printf("The entered character is symbol");
    else
        printf("The character entered is not symbol or lower cased");
}