#include <stdio.h>

void prime_factors(int n);

int main() {
    int pos_int;

    printf("Please enter a positive integer: ");
    scanf("%d", &pos_int);

    if (pos_int <= 1) {
        printf("Number must be greater than 1.\n");
        return 1;
    }

    printf("Prime factors of %d are: ", pos_int);
    prime_factors(pos_int);

    return 0;
}

void prime_factors(int n) {

    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2)
        printf("%d", n);

    printf("\n");
}
