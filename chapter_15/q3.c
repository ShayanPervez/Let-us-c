#include<stdio.h>
#include<string.h>
#include<ctype.h>

int mul_and_sub(int);
int is_valid_card(const char *);

int main()
{
    char str[17];

    printf("Enter the credit card number: ");
    scanf("%16s", str);

    printf("Card Entered: %s\n", str);

    if (is_valid_card(str))
        printf("Valid credit card number.\n");
    else
        printf("Invalid credit card number.\n");

    return 0;
}

int mul_and_sub(int digit)
{
    digit*=2;
    if (digit>9)
    {
        digit-=9;
    }
    return digit;
    
}

int is_valid_card(const char *str)
{
    int len = strlen(str);
    int sum=0, is_second=0;
    for (int i = len-1; i>=0; i-- )
    {
        if (!isdigit(str[i])) return 0;
        int digit = str[i] - '0';
        if (is_second)
            sum+= mul_and_sub(digit);
        else
            sum+= digit;
        is_second =! is_second;
    }
    return (sum % 10==0);    
}


