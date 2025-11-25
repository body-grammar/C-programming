#include <stdio.h>

int main()
{
    int a[100], i, n, se, loc=-1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &se);

    for(i=1; i<n; i++)
    {
        if(a[i]==se)
        {
            loc=i;
            break;
        }
    }

    if(loc==-1)
    {
        printf("Element to be searched is not present in the array.");
    }
    else 
    {
        printf("Element is present in the array in %d position", loc+1);
    }

    return 0;
}