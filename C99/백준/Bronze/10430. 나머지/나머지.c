#include <stdio.h>

int main() {
    int A,B,C;
    int q,w,e,r;
    scanf("%d %d %d",&A,&B,&C);
    q= (A+B)%C;
    w=((A%C) + (B%C))%C;
    e=(A*B)%C;
    r=((A%C) * (B%C))%C;
    printf("%d %d %d %d",q,w,e,r);

    return 0;
}