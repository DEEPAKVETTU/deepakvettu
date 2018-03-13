#include <stdio.h>
#include <math.h>
 
int main()
{
     int b, d, n, i, tn;
     int sum = 0;
 
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &b);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * b + (n - 1)* d ))/ 2;
     tn = b + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = b; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
