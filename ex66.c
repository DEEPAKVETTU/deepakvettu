#include<stdio.h>
void main()
{
int d,p,c=0;
scanf("%d",&d);
for(d=2;d<=p;p++)
{
if(d%p==0)
c++;
}
if(c==1)
printf("prime");
else
printf("Non prime");
}
