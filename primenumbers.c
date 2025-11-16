#include <stdio.h>
int main()
{
    int n=100, i, d=0;
    while(i<=n)
    {
        for(int j=0; j<=i; j++)
        {
            if((i%j)!=0)
            {
                printf("%d\n", i);
            }
        }
        i++;
    }
    return 0;
}