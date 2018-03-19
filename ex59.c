#include <stdio.h>
#include<string.h>
int main()
{
    int b[20],i=0,m,temp;
printf("enter array elements");

  for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
m=b[0];
for(i=0;i<10;i++)
{
if(b[i]>m)
{
temp=b[i];
b[i]=m;
m=temp;
}
}
printf("maximum element is %d",m);
    return 0;
}
