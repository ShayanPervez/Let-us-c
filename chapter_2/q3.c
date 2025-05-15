#include<stdio.h>
#include<math.h>

int main(void)
{
    float L1, L2, G1, G2, D;
    printf("Please enter latitute (L1, L2): ");
    scanf("%f %f", &L1, &L2);
    printf("\nPlease eneter the longitiute(G1,G2): ");
    scanf("%f %f", &G1, &G2);

    D = 3963 * acos((sin(L1) * sin(L2)) + (cos(L1) * cos(L2) * cos(G2 - G1)) );
    printf("Distance in nautical miles is: %f", D );
}