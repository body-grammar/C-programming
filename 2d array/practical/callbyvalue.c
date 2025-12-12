#include <stdio.h>

void swapv(int x, int y);

int main()
{
    int a=10, b=20;
    printf("Values of a=%d and b=%d before swapping.\n", a, b);
    swapv(a, b);
    printf("Values of a=%d and b=%d after swapping\n", a, b);
    return 0;
}

void swapv(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("Values of x=%d and y=%d after swapping.\n", x, y);
}