#include <stdio.h>
#include <math.h>

int main() {
    float x, sum = 0.0, term;
    int i;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    float y = (x - 1) / (x + 1);

    for (i = 1; i <= 7; i += 2) {
        term = (1.0 / i) * pow(y, i);
        sum += term;
    }

    sum *= 2;

    printf("The value of ln(%f) is approximately: %f\n", x, sum);
    return 0;
}
