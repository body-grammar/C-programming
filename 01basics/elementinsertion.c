#include <stdio.h>

int main()
{
    int a[100], n, r, m, i, loc;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position where element needs to be inserted to be inserted: ");
    scanf("%d", &m);

    printf("Enter the element to be inserted: ");
    scanf("%d", &r);

    loc=m-1;

    if(loc>n)
    {
        printf("Insertion not possible");
    }

    for(i=n; i>loc; i--)
    {
        a[i]=a[i-1];
    }
    
    a[loc]=r;

    printf("New array is: \n");
    for(i=0; i<n+1; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}