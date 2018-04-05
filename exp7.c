#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int d,p,n1,n2,count=0;
	scanf("%s %s",str1,str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1==n2)
	{
		for(d=0;d<n1;d++)
		{
			if(str1[d]==str2[d])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
