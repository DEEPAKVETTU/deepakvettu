#include<stdio.h>
#include<string.h>
void main()
{
char x[100],y[100];
int i,j,l1,l2;
scanf("%s %s",x,y);
l1=strlen(x);
l2=strlen(y);
if(l1>l2)
{
    printf("%s",x);
}
else
{
    printf("%s",y);
}
}
