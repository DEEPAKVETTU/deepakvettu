#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50],temp[10];
	int d,p,n,k;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	while(d<p)
	{
		for(d=0;d<n;d++)
		{
			for(p=n;p>=1;p--)
			{
				temp[k]=str[d];
				str[d]=str[p];
				str[p]=str[d];
			}
		}
	}
	printf("\n%s",str);
	return 0;
}
