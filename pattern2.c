#include <stdio.h>
int main()
{
    int n;
    n=4;
    for(int i=1; i<=n; i++)
    {
        char ch='A'+(i-1);
        
        for(int j=0; j<i; j++)
        {
            /* if(i==1)
            {
                printf("%c", 65);
            }
            else if(i==2)
            {
                printf("%c", 66);
            }
            else if(i==3)
            {
                printf("%c", 67);
            }
            else if(i==4)
            {
                printf("%c", 68);
            } */
           printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}