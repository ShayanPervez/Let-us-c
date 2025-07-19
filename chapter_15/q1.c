#include <stdio.h>
#include <string.h>

int main() {
    char str[11]; 
    scanf("%s", str);

    int sum = 0;
    int i = 0;

    if (strlen(str) != 10) {
        printf("Invalid input length. ISBN-10 must be 10 characters.\n");
        return 0;
    }

    while (i < 10) {
        int value;
        if (i == 9 && str[i] == 'X') {
            value = 10;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            value = str[i] - '0';
        }
        else {
            printf("Invalid character in ISBN.\n");
            return 0;
        }

        sum += (i + 1) * value;
        i++;
    }

    if (sum % 11 == 0) {
        printf("This is ISBN\n");
    } else {
        printf("Not ISBN\n");
    }

    return 0;
}
