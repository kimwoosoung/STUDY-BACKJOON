#include <stdio.h>

int main() {
    int l,p,n;
    scanf("%d %d",&l,&p);
    int num = l * p;
    for(int i=0; i<5; i++){
        scanf("%d",&n);
        printf("%d ",n-num);
    }
    
    return 0;
}