#include<stdio.h>
#include<math.h>
float distance(float, float, float, float);
void triangle_area(float, float, float, float , float ,float, float * );
int isInside(float , float , float , float , float , float , float , float );
int main() {
    // Triangle vertices
    float x1 = 0, y1 = 0;
    float x2 = 5, y2 = 0;
    float x3 = 0, y3 = 5;

    // Point to test
    float x = 1, y = 1;

    // Check and print result
    if (isInside(x1, y1, x2, y2, x3, y3, x, y))
        printf("Point (%.1f, %.1f) lies inside the triangle.\n", x, y);
    else
        printf("Point (%.1f, %.1f) lies outside the triangle.\n", x, y);

    return 0;
}

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

void triangle_area(float x1, float y1, float x2, float y2, float x3, float y3, float *area) {
    float a = distance(x1, y1, x2, y2);
    float b = distance(x2, y2, x3, y3);
    float c = distance(x3, y3, x1, y1);
    float s = (a + b + c) / 2;

    *area = sqrt(s * (s - a) * (s - b) * (s - c));
}

int isInside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y) {
    float A, A1, A2, A3;


    triangle_area(x1, y1, x2, y2, x3, y3, &A);
    triangle_area(x, y, x2, y2, x3, y3, &A1);
    triangle_area(x1, y1, x, y, x3, y3, &A2);
    triangle_area(x1, y1, x2, y2, x, y, &A3);

 
    if (fabs((A1 + A2 + A3) - A) < 0.0001)
        return 1;
    else
        return 0;
}
