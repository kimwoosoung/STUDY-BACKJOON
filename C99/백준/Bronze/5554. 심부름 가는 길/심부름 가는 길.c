#include <stdio.h>

int main() {
    int n,m,a,b;
    int x,y;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    
    x=(n+m+a+b)/60;
    y=(n+m+a+b)%60;
    
    
    printf("%d\n",x);
    printf("%d",y);
    
    return 0;
}