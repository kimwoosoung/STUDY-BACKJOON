#include <stdio.h>

int main() {
    int n,num=0;
    for(int i=1; i<=5; i++){
        scanf("%d",&n);
        num += n;
    }
    printf("%d",num);
    return 0;
}