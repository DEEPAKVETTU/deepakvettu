#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int i,b=0;
    printf("enter the string :");
    scanf("%[^n]s",s);
    for(i=0;s[i]!='\0';i++){
if(s[i]==' ')
        {
            b++;
        }
}
 printf("no of words are :%d",b);
}
return 0;
