#include <stdio.h>
void main()
{
int d,p;
scanf("%d\n",&p);
printf("%d\n",p);
for(d=1;d<=p;d++)
{
if(p%d==0)
{
printf("%d\n",d);
}
}
getch();
}
