#include<stdio.h>
int main()
{
char p[10],i,count=0;
for(i=0;i<10;i++)
{
scanf("%c",&p[i]);
}
for(i=0;i<10;i++)
{
if((p[i]=='a')!!(p[i]=='e')!!(p[i]=='i')!!(p[i]=='o')!!(p[i]=='u'))
{
count=count++;
}
}
if(count>=1)
{
printf("yes");
}
else
{
printf("no");
}
}
