#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int p,count=0,l,d;
    scanf("%s",a);
    l=strlen(a);
    for(p=0,d=l-1;a[p]!='\0';p++,d--)
    {
        if(a[p]==a[d])
        {
            count++;
        }
    }
    if(count==l)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not a pallindrome");
    }
}
