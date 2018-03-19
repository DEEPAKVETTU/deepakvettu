#include <stdio.h>
int main() {
    long int d;
    long int p;
    scanf("%d%d",&d,&p);
    d = d ^ p;
    d = p ^ d;
    p = p ^ d;
    printf("%d %d", d, p);

    return 0;
}
