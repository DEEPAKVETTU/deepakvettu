#include <stdio.h>
#include<string.h>
int main(void) {
	int j,k;
	scanf("%d %d",&j,&k);
	j=j^k;
	k=j^k;
	j=j^k;
	printf("%d %d",j,k);
	return 0;
}
