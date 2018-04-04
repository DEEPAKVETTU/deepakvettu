#include<stdio.h>
void main()
{
int d,p;
printf("enter the value\n");
scanf("%d",&d);

while(d!=0)
{
    
p=d%10;
if(p%2!=0)
{
printf(" the odd number is %d",p);

}d=d/10;

}

}
