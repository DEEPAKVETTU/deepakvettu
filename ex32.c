#include <stdio.h>
#include <string.h>
 
void main()
{
    char a[200];
    int c = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]a", a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
            c++;    
    }
    printf("number of words in given string are: %d\n", c + 1);
}
