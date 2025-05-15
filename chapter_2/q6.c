#include<stdio.h>
#include<math.h>

int main()
{
    int c,d;
    printf("Enter trhe number C: ");
    scanf("%d", &c);
    printf("\nEnter trhe number D: ");
    scanf("%d", &d);

    int temp = c;
    c = d;
    d = temp;

    printf("The interchanged value of C is --> %d and D is --> %d\n", c,d);


}