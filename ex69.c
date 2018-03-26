#include<stdio.h>
void main()
{
  int d,p,c;
  printf("enter the numbers:");
  scanf("%d %d",&d,&p);
  c=d-p;
  if(c%2==0)
  {
    printf("even");
  }
  else
  {
  printf("odd");
}
}
