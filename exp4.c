#include<stdio.h>
#include<string.h>
void append(char s[])
{
  int d=strlen(s);
  s[d]='.';
  s[d+1]='\0';
  printf("%s",s);
}
int main()
{
      char s[20];
      printf("Enter a number: ");
      scanf("%s",s);
      append(s);
      return 0;
}
