#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 100 
int main()
{
    char str[MAX_SIZE];
    int ap, di, ot, i;

    ap = di = o = i = 0;


    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            ap++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            di++;
        }
        else
        {
            ot++;
        }

        i++;
    }

    printf("Alphabets = %d\n", ap);
    printf("Digits = %d\n", di);
    printf("Special characters = %d", ot);

    return 0;
}
