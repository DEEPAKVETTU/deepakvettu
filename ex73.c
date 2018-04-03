#include<stdio.h>
int main()
{
int d,p,c;
printf("enter the number:");
scanf("%d",&d);
printf("left and right numbers:");
scanf("%d%d",&p,&c);
if(d>p&&d<c)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
