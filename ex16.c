#include <stdio.h>
int main()
{
  int m1, m2, i, j, flag;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &m1, &m2);
  printf("Prime numbers between %d and %d are: ", m1, m2);
  for(i=m1+1; i<m2; ++i)
  {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",i);
  }
  return 0;
