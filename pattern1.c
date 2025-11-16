#include <stdio.h>
int main()
{
    int n;
    n=4;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if((i+j)%2==0)
            {
                printf("%d", 0);
            }
            else
            {
                printf("%d", 1);
            }
        }
        printf("\n");
    }
    return 0;
}