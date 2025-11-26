#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, l;

    printf("Enter any string: ");
    scanf("%s", str);

    i=0;

    while(str[i]!='\0')
    {
        i++;
    }

    printf("Length of the string is %d", i);

    return 0;
}