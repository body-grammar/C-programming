#include <stdio.h>

int main()
{
    int a[100], n, i, l;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    l=a[0];

    for(i=1; i<n; i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }

    printf("The largest number present in the array is %d", l);

    return 0;
}