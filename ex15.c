#include<stdio.h>
void main()
{
int n,m,i;
printf("enter n,m values");
scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
}
