#include<stdio.h>
void main()
{
	int mi,mx,i;
	printf("ENTER THE RANGE:\n");
	scanf("%d%d",&min,&max);
	printf("TO PRINT THE ODD NO'S BETWEEN THE RANGE:\n");
	for(i=mi;i<mx;i++)
	{
		if((i%2)!=0)
		{
			printf("%d\n",i);
		}
	}
}  
