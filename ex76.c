#include<stdio.h>
void main()
{
    int d,p,c=0;
    printf ("Enter a number \n");
    scanf ("%d",&p);
    for (d=1;d<=p;d++)
    {
        if(p%d==0)
        c=c+1;
    }
    if (c==2)
    printf ("The number is PRIME");
    else
    printf ("The number is COMPOSITE");
}
