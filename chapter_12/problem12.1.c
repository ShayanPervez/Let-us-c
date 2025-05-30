#include <stdio.h>
#define ISUPPER(c) (c >= 65 && c <= 90? 1:0)
#define ISLOWER(c) (c >= 97 && c <= 122? 1:0)
#define ISALPHA(c) (ISUPPER(c) || ISLOWER(c))
#define BIG(x,y) ((x)>(y)?(x):(y))

int main(void)
{
    char ch;
    int d, a, b;
    printf("\nEnter any anyplapetic character: ");
    scanf("%c", &ch);
    if (ISUPPER (ch) == 1)
    {
        printf("You entered capital letter:\n");
    }
    if (ISLOWER (ch) == 1)
    {
        printf("You entered small case letter\n");
    }
    if (ISALPHA (ch) != 1)
    {
        printf("You entered character other than alphabet\n");
    }
    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);
    d = BIG(a,b);
    printf("Bigger number is %d\n", d);
    return 0;
}
