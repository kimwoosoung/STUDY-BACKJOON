#include <stdio.h>

int main() {
    int M, G;
    
    while(1) {
        scanf("%d %d", &M, &G);
        
        if(M==0 && G==0) break;
        
        printf("%d\n", M+G);
    }
    
    return 0;
}