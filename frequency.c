#include <stdio.h>

int main()
{
    int a[100], i, j, n, t, count=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements whose frequency is required: ");
    scanf("%d", &t);

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]==t)
            {
                count++;
            }
        }
    }

    printf("The frequency of %d is %d", t, count);

    return 0;
}