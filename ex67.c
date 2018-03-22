#include<stdio.h>
void main()
{
  int a,b,c,d;
  printf("enter the number:");
  scanf("%d",&a);
  b=a%10;
  c=10-b;
  d=c+a;
  printf("answer %d",d);
}
