#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch>=65 && ch<=90)
        printf("The character is an uppercased letter");
    if (ch>=97 && ch<=122)
        printf("The character is lower cased");
    if (ch >= 48 && ch <=57)
        printf("The character is number");
    if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
        printf("The entered character is symbol");
}