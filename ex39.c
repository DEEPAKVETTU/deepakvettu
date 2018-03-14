#include<stdio.h>
void main()
{
   int b[10],i,great;
   printf("Enter a values:");
   for (i=0;i<10;i++)
   {
    scanf("%d", &b[i]);
   }
   great=b[0];
   for(i=0;i<10;i++)
   {
  if(b[i]>great)
  {
  great=b[i];
  }
  }
  printf("greatest number %d",great);
  return 0;
 }
