#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[20];
	int p,i,f;
	printf("enter the string:");
	scanf("%s",str);
	p=strlen(str);
	for(i=0;i<n;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			flag=1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			flag=2;
		}
		else
		{
			flag=0;
		}

	}
	if(flag==1 && flag==2)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}

	return 0;
}