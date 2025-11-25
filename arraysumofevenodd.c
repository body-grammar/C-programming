#include <stdio.h>

int main()
{
    int a[100], i, n, sum1=0, sum2=0;

    printf("Enter the size of the given array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else 
        {
            sum2=sum2+a[i];
        }
    }

    printf("The sum of even numbers are: %d\n", sum1);
    printf("The sum of odd numbers is %d\n", sum2);

    return 0;
}