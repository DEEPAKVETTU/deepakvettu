#include <stdio.h>

int main(void) 
{
	char d[20],p[20];
	int i,flag;
	scanf("%s %s",d,p);
	int l1,l2;
	l1=strlen(d);
	l2=strlen(p);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			if(d[i]==p[i])
			{
			    flag=1;
			}
		}
	}
	if(flag==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
}
