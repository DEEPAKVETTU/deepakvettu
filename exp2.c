#include<stdio.h>
int main(void){
	int d,fact=1;
	scanf("%d",&d);
	while(d>-1){
		if(d==0){
			fact=fact*1;
		}
		else{
			fact=fact*d;
		}
		d--;
	}
	printf("%d",fact);
}
