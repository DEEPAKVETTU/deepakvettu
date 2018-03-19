#include <stdio.h>
 
int main(void) 
{
	int p,m,pro;
	printf("enter the number1:");
	scanf("%d",&p);
	printf("\nenter the number2:");
	scanf("%d",&m);
	pro=p*m;
	if(pro%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
