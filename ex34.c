#include <stdio.h>
#include<conio.h>
void main()
{
char str[200];
int j=0;count =0;
printf("enter the paragraph\n");
while(str[j]!='\0')
{
if(str[j]=='.')
count++;
j++;
}
printf("number of lines %d",count+1);
}
