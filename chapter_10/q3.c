#include<stdio.h>

void TOH(int, char, char, char);

int main()
{
    
    printf("The sequence of output is:\n");
    TOH(3, 'A', 'B', 'C');
    return 0;
}

void TOH(int n, char peg1, char peg2, char peg3)
{
    if (n>0)
    {
        TOH (n-1, peg1, peg3, peg2);
        printf("The peg moved from %c to %c\n", peg1, peg3);
        TOH(n-1, peg2, peg1, peg3);
    }
}