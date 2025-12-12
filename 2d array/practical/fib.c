#include <stdio.h>

int main()
{
    int i, n, old=0, fib, new=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    i=1;
    while(i<n)
    {
        if(i<=1)
        {
            fib=i;
        }
        else 
        {
            fib=old+new;
            old=new;
            new=fib;
        }
        printf("%d\n", fib); 
        i++;
    }

    printf("\nFibbonaci number is %d", fib);
    
    return 0;
}