#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float c, d, e, f, g;
    a = 5000;
    b = 5;
    c = 2;
    d = (a*b*c)/100;
    printf("simple interest is %f", d);
    e = 1 + (b/100);
    f = pow(e, c);
    g = a*f - a;
    printf("compound interest is %f", g);
    return 0;
}