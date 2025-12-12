#include <stdio.h>
#include <math.h>

int main()
{
    int c, n, n1, arm, r;

    c=0;

    for(int i=1; i<=100; i++)
    {
        arm=0;
        n=n1=i;

        while(n>0)
        {
            c++;
            n=n/10;
        }
        while (n1>0)
        {
            r=n1%10;
            arm=arm+pow(r, c);
            n1=n1/10;
        }
        
        if(i==arm)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}