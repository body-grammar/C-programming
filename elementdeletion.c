#include <stdio.h>

int main()
{
    int i, n, loc, a[100], pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);

    loc=pos-1;

    if(loc>=n)
    {
        printf("Deletion not possible");
    }
    
    for(i=loc; i<n-1; i++)
    {
        a[i]=a[i+1];
    }

    n=n-1;

    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}