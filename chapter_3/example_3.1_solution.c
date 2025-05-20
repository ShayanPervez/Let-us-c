/* While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If the quantity and price items are input through keyboard
, write a program to calculate the total expense*/

#include<stdio.h>
int main()
{
    int qty, dis;
    float rate, tot;
    printf("Enter the quantity and rate");
    scanf("%d %f", &qty, &rate);
    if (qty >1000)
    {
        dis = 10;
    }
    else
    {
        dis=0;
    }
    tot = (qty*rate) -(qty*rate*dis/100);
    printf("Total expense = Rs %f\n",tot);
    return 0;
}