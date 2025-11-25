#include <stdio.h>

int main()
{
    int a[100], i, n, s=0; //declaration
    printf("Enter the size of an array: ");
    scanf("%d", &n); //value assignment
    printf("Enter the elements of the array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        s = s+a[i];
    }

    printf("%d", s);

    return 0;

}