#include <stdio.h>

int main() {
    int a,n,m;
    scanf("%d",&a);
    n = a * 78/100;
    m = a - (a* 20/100)* 22/100;
    printf("%d %d",n,m);

    return 0;
}