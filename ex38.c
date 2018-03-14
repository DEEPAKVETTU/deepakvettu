#include <stdio.h>
#include<string.h>
int main(void) {
	int j,l;
	scanf("%d %d",&j,&l);
	j=j^l;
	l=j^l;
	j=j^l;
	printf("%d %d",j,l);
	return 0;
}
