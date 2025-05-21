#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    num1>num2?(num1>num3?printf("%d is greatest", num1):printf("%d is greatest",num3)):(num2>num3?printf("%d is greatest", num2): printf("%d is greatest", num3));
}