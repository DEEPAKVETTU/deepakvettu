#include<stdio.h>

 
void main()
{
    int i,m;
    int sum=0,a[60];
    int avg=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        sum=sum+a[i];
    }
avg=sum/m;
printf("%d",avg);
    
}
