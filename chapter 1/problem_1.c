#include<stdio.h>

int main()
{
    float bp, da, hra, gross_salary;
    printf("Enter the value of basic salary");
    scanf("%f", &bp);

    da = 0.4*bp;
    hra = 0.2*bp;
    gross_salary = bp+da+hra;

    printf("gross Salary = %f", gross_salary);
}