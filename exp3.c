#include <stdio.h>
int main()
{
int d, p= 0, rem;
scanf("%d", &d);
while(d != 0)
{
  rem = d%10;
  p = p*10 + rem;
  d /= 10;
}
printf( "%d", p);
return 0;
}
