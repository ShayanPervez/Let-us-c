#include<stdio.h>
#define AMEAN(x,y) ((x+y)/2.0)
#define ABVALUE(x) (((x) < 0) ? -(x) : (x))
#define UTOLCASE(x) (x>='A' && x<= 'Z'?x+32:x)
#define LARGESTNO(x,y,z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))

int main()
{
    float num1,num2, val_avg;
    int n1,n2,n3, largest_no;
    signed int absval;
    int abs_val;
    char ch;

    printf("Enter two numbers to find the mean: ");
    scanf("%f %f", &num1, &num2);
    val_avg = AMEAN(num1,num2);
    printf("The avg value is: %f\n",val_avg);

    printf("Enter the integer number to to find the absolute value of: ");
    scanf("%d", &absval);
    abs_val = ABVALUE(absval);
    printf("The absolute value is %d\n", abs_val);

    printf("Enter the alphabet/character to concert to lowercase: ");
    scanf(" %c", &ch);
    ch = UTOLCASE(ch);
    printf("The lowercase character is: %c\n", ch);

    printf("Enter the three number to find largest of all: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    largest_no = LARGESTNO(n1,n2,n3);
    printf("The largest of three number is %d", largest_no);

    return 0;


}