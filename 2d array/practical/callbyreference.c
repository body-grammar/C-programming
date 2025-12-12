#include <stdio.h>

void swapr(int *x, int *y);

int main()
{
    int a=10, b=20;
    printf("Value of a=%d and b=%d before swapping.\n", a, b);
    swapr(&a, &b);
    printf("Value of a=%d and b=%d after swapping.\n", a, b);

    return 0;
}

void swapr(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("Value of x=%d and y=%d after swapping.\n", *x, *y);
}