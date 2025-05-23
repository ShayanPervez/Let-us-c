#include <stdio.h>

int main()
{
    int diff;
    for (int i = 1; i <= 24; i++)
    {
        if (i == 24 || i == 0)
        {
            printf("12 AM (Midnight)\n");
        }
        else if (i == 12)
        {
            printf("12 PM (Noon)\n");
        }
        else if (i > 0 && i < 12)
        {
            printf("%d AM\n", i);
        }
        else if (i > 12 && i < 24)
        {
            diff = i - 12;
            printf("%d PM\n", diff);
        }
        else if (i == 12)
        {
            printf("12 PM (Noon)\n");
        }
    }

    return 0;
}
