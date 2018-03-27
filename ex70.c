#include<stdio.h>
int main()
{
int d,c=0,x=1,p=2,i;
scanf("%d",&d);
while(d!=1)
{
d=d/2;
c++;
}
for(i=0;i<=c;i++)
{
x=x*p;
}
printf("%d",x);
}
