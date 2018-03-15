#include<stdio.h>
void main()
{
    int n,a=1;
    printf("ENTER A NUMBER\t");
    scanf("%d",&n);
    if(n>=1&&n<=10)
    {
        printf("YES,IT IS IN RANGE");
    }
    else 
    {
      printf("NOT, IT IS NOT IN RANGE");
    }
}
