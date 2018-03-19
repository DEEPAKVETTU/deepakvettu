#include <stdio.h>
 
int main(void) 
{
	int p,ans;
	printf("enter the number:");
	scanf("%d",&p);
	if(p%2==0)
	{
		ans=p-2;	
	}
	else
	{
		ans=p-1;
	}
	printf("\n%d",ans);
	return 0;
}
