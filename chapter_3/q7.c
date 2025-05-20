#include<stdio.h>

// we will use distance formula to check whether the point is inside on or outside the circle

// distance^2 =(px−cx)^2 +(py−cy)^2
 
// Now compare distance² with r² (to avoid using square root):

// If (px - cx)² + (py - cy)² < r² → point is inside the circle

// If (px - cx)² + (py - cy)² == r² → point is on the circle

// If (px - cx)² + (py - cy)² > r² → point is outside the circle

#include <stdio.h>

int main() {
    int cx = 0, cy = 0, r = 5;       // center (0,0), radius 5
    int px = 3, py = 4;              // test point (3,4)

    int dx = px - cx;
    int dy = py - cy;
    int distSq = dx * dx + dy * dy;
    int rSq = r * r;

    if (distSq < rSq) {
        printf("Point is inside the circle.\n");
    } else if (distSq == rSq) {
        printf("Point is on the circle.\n");
    } else {
        printf("Point is outside the circle.\n");
    }

    return 0;
}
