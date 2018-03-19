#include<stdio.h>
void main()
{
int m,a[30],count=1,b=0,r;
printf("\n Enter a number");
scanf("%d",&m);
b=m;
while(m!=0)
{
m=m/10;
count++;
}
for(i=count-1;i>=0;i--)
{
while(b!=0)
{
r=b%10;
a[i]=r;
b=b/10;
}
}
for(i=0;i<count;i++)
{
printf("%d",a[i]);
}
}
