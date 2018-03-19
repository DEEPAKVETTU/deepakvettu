#include<stdio.h>
#include<string.h>
void main()
{
    int a=0,b=1,d,p,i;
    printf("Enter the limit");
    scanf("%d",&p);
    printf("The fibonacci series");
    printf("\n %d %d ",a,b);
    for(i=2;i<p;i++)
    {
        d=a+b;
        printf("%d ",d);
        a=b;
        b=d;
    }
}
