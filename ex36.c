#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char b[50];
    int j,count=0,c;
    printf("enter the string");
    gets(b);
    c=strlen(b);
    for(j=0;j<=c;j++)
    {
    if(33<=b[j]<=47||58<=b[j]<=64||91<=b[j]<=96||123<=b[j]<=126)
    {
        count=count+1;
    }
    }
    printf("the total no of special characters in string is %d",count);
    return 0;
}
