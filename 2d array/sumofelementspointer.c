#include <stdio.h>

void sum(int *p, int n);

int main()
{
    int a[15], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum(&a[0], n);
    return 0;
}

void sum(int *p, int n)
{
    int s=0, i;
    for(i=0; i<n; i++)
    {
        s=s+(*p);
        p++;
    }
    printf("%d", s);
}