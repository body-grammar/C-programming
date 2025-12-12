#include <stdio.h>

void area(int *r);

void circum(int *r);

int main()
{
    int r;
    printf("Enter the radius of the circle: \n");
    scanf("%d", &r);
    area(&r);
    circum(&r);
    return 0;
}

void area(int *r)
{
    float ar;
    ar=3.14*(*r)*(*r);
    printf("The area of the circle is: %f\n", ar);
}

void circum(int *r)
{
    float c;
    c=2*3.14*(*r);
    printf("The circumference of the circle is: %f\n", c);
}