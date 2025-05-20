#include <stdio.h>

int main() {
    int x1 = 1, y1 = 2;
    int x2 = 3, y2 = 4;
    int x3 = 5, y3 = 6;

    if ((y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1)) {
        printf("Points lie on the same line.\n");
    } else {
        printf("Points do NOT lie on the same line.\n");
    }

    return 0;
}
