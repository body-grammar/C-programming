#include <stdio.h>
#include <string.h>

int main()
{
    char rev[100], str[100];
    int i, l, j=0;

    printf("Enter the string: ");
    scanf("%s", str);

    i=0;

    while (str[i]!='\0')
    {
        /* code */
        i++;
    }

    l=i-1;

    while(l>=0)
    {
        rev[j++]=str[l--];
    }
    
    rev[j]='\0';

    printf("Reversed string is: ");
    printf("%s", rev);

    return 0;
}