#include<stdio.h>
void main()
{
	char s[20],t;
	int d,l;
	printf("Enter the String:");
	scanf("%s",s);
	l=strlen(s);
	for(d=0;d<l;d=d+2)
	{
		t=s[d];
		s[d]=s[d+1];
		s[d+1]=t;
	}
	printf("%s",s);
}
