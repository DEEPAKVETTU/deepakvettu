#include <stdio.h>
#include<string.h>
int main(void) {
	char d[20];
	int i,p;
	scanf("%s",d);
	p=strlen(d);
	for(i=0;i<p;i++)
	{
		if(i==p/2){
			d[i]='*';
			break;
		}
 
	}
	printf("%s",d);
	return 0;
}
