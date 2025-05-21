#include <stdio.h>

int main() {
    int red, green, blue;
    float cyan, magenta, yellow, black;
    float red_modified, green_modified, blue_modified, white;

    printf("Enter the value of RGB color (0 to 255): ");
    scanf("%d %d %d", &red, &green, &blue);
    red_modified = red / 255.0;
    green_modified = green / 255.0;
    blue_modified = blue / 255.0;
    white = (red_modified > green_modified) ? 
               ((red_modified > blue_modified) ? red_modified : blue_modified) : 
               ((green_modified > blue_modified) ? green_modified : blue_modified);

    if (white == 0) {
        cyan = magenta = yellow = 0;
        black = 1;
    } else {
        cyan = (white - red_modified) / white;
        magenta = (white - green_modified) / white;
        yellow = (white - blue_modified) / white;
        black = 1 - white;
    }
    printf("CMYK: C=%.2f M=%.2f Y=%.2f K=%.2f\n", cyan, magenta, yellow, black);

    return 0;
}
