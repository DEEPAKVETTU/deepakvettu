#include <stdio.h>

 

int main(void) 

{

int d,p,temp;

printf("\n enter two numbers to swap:");

scanf("%d %d",&d,&p);

printf("\n before swapping:");

printf("\nx=%d",d);

printf("\ny=%d",p);

temp=d;

d=p;

p=temp;

printf("\n after swapping:");

printf("\nx=%d",d);

printf("\ny=%d",p);

return 0;

}
