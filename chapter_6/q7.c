#include <stdio.h>

int main() {
    for (int a = 1; a <= 100; a++) {
        for (int b = a; b <= 100; b++) {
            for (int c = a + 1; c <= 100; c++) {
                for (int d = c; d <= 100; d++) {
                    if ((a*a*a + b*b*b) == (c*c*c + d*d*d)) {
                        printf("%d^3 + %d^3 = %d^3 + %d^3 = %d\n", a, b, c, d, a*a*a + b*b*b);
                    }
                }
            }
        }
    }
    return 0;
}
