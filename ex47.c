#include <stdio.h>

int main() {
	int a,min,max,i,n[50];
	printf("enter the no");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	min=max=n[0];
	for(i=0;i<a;i++)
	{
	if(n[i]>max)
		max=n[i];
	else
		min=n[i];
	}
	printf("\n min no is%d ",min);
	printf("\n max no is%d ",max);
	return 0;
}
