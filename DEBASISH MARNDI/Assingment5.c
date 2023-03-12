#include<stdio.h>
#include<math.h>
int main()
{
    float r, d, p, a;
    printf("Enter the radius of the circle");
    scanf("%f", &r);
    d=2*r;
    printf("\nThe diameter of the circle d=%.2f", d);
    p=2*3.14*r;
    printf("\nThe perimeter of the circle p=%.2f", p);
    a=3.14*pow(r,2);
    printf("\nThe area of the circle a=%.2f", a);
    return 0;
}