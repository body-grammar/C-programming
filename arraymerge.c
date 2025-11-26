#include <stdio.h>

int main()
{
    int a[100], b[100], n, m, i, j=0;

    printf("Enter the sixe of a and b: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of array a: ");
    for(i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of array b: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=m; i<m+n; i++)
    {
        a[i]=b[j];
        j++;
    }

    n=m+n;

    printf("The merged array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}