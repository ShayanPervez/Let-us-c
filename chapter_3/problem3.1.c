#include<stdio.h>
int main()
{
    float cp,sp, p, l;
    printf("Enter the cost and selling price: ");
    scanf("%f %f", &cp, &sp);

    p = sp-cp;
    l = cp- sp;

    if (p>0)
        printf("Seller has made a proft of Rs %f", p);
    if (l>0)
        printf("Seller has made a loss of Rs %f", l);
    if (p==0)
        printf("Seller has made no profit and no loss");
    return 0;
}