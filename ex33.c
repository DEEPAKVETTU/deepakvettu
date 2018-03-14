#include<stdio.h>
int main()
{
int j,space;
char str[20];
scanf("%s",&str);
for(j=0;str[j] !='\0';j++)
{
if(str[j]== ' ')
space++;
}
printf("%d",space);
return 0;
}
