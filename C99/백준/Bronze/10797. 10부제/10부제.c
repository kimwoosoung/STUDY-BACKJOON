#include <stdio.h>

int main() {
    int a,b,count=0;
    scanf("%d",&a);
    for(int i=0; i<5; i++){
        scanf("%d",&b);
        if(a==b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}