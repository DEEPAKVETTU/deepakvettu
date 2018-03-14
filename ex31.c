#include<stdio.h>
#include<string.h>
 
void main()
{
    char b[50];
    int n,i,c=0;
    gets(b);
    n=strlen(b);
    for(i=0;i!=n;i++)
    {
        if(b[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
 
 
}
