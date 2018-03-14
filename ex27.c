#include<stdio.h>
int main()
{
    char n;
    printf("Enter the word ");
    scanf("%s",&n);
    if(n>='0'&&n<='9')
    {
        printf("yes is numeric",n);
        
}
else
{
    printf("no is not numeric",n);
    return 0;
}
}
