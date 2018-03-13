#include<stdio.h>
void main()
{
    int a,b,d=1,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        d=d*a;
    }
    printf("%d",d);
}
