#include <stdio.h>

int main()
{
    int a[100], i, n, se, l, u, m;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &se);

    l=0;
    u=n-1;
    m=(l+u)/2;

    while(l<=u && a[m]!=se)
    {
        if(se<a[m])
        {
            u=m-1;
        }
        else
        {
            l=m+1;
        }
        m=(l+u)/2;
    }

    if(se==a[m])
        printf("Found at position %d", m+1);
    else
        printf("Not found");

    return 0;
}