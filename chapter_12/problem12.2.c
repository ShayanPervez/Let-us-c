#include<stdio.h>
#include "areaperi.h"

int main()
{
    float sid1, sid2, sid3, sid, p_tri, p_cir, p_sqr, a_tri, a_cir, a_sqr;
    float r, base, height;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    p_cir = PERIC(r);
    printf("Perimeter of the circle is %f\n", p_cir);
    a_cir = AREAC(r);
    printf("Area of the circle is %f\n", a_cir);
    
    printf("Enter the side of square: ");
    scanf("%f", &sid);
    p_sqr = PERIS(sid);
    printf("Perimeter of the squrae is %f\n", p_sqr);
    a_sqr = AREAS(sid);
    printf("Area of the square is %f\n", a_sqr);

    
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &sid1, &sid2, &sid3);
    p_tri = PERIT(sid1,sid2,sid3);
    printf("Perimeter of the triangle is %f\n", p_tri);
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    a_tri = AREAT(base,height);
    printf("Area of the triangle is %f\n", a_tri);
    return 0;

}