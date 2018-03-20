#include <stdio.h>
#include<string.h>
int main()
{
  char s[30];
int c,i;
printf("enter the string");
scanf("%[^\n]%*c",&s);
for(i=0;s[i]!='\0';i++)
{
  if(s[i]==32)
  {
c++;
  }
}
printf("number of words in a sentence is %d",++c);
    return 0;
}
