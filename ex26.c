#include <stdio.h>

int main()
{
		int a[100]={2,1,3}; 
int i,j,c=3,temp;
for(i=0;i<c;i++)
{
	for(j=i+1;j<c;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
}

c=(c+1)/2-1;
printf("%d",a[c]);

	return 0;
}
