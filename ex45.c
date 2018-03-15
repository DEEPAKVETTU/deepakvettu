#include<stdio.h>
void main()
{
int a,c=0;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
c++;
}
printf("no of digits %d",c);
}
