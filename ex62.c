#include <stdio.h>

int main(void) {
	int n,r,c=0,c1=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		count++;
		if(r==1||r==0)
		c1++;
		n=n/10;
	}
	if(c==c1)
	printf("yes");
	else
	printf("no");
	return 0;
}
