#include<stdio.h>

int main()
{
    float otpay;
    int hour, i = 1;
    while(i<=10)
    {
        printf("\Enter the number of hours worked: ");
        scanf("%d", &hour);
        if (hour>=40)
        {
            otpay = (hour - 40)*120;
        }
        else
        {
            otpay = 0;
        }
        printf("Hours= %d Overtime pay = Rs. %f\n",hour, otpay);
        i++;
    }
    return 0;
}