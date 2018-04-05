#include<stdio.h>
#include<string.h>
int main()
{
    char a[56],b[45];
    int d,flag=0;
    printf("enter the two string:");
    scanf("%s%s",a,b);
    for(d=0;a[d]!='\0';d++)
    {
        if(a[d]==b[d])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
