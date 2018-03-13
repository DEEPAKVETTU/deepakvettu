#include<stdio.h>
int main(){
  int j,f=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(j=1;j<=num;j++)
      f=f*j;
 
  printf("Factorial of %d is: %d",num,f);
  return 0;
}
