#include <stdio.h>

int main() {
    int a[10],max,s=0,i;
    for(int i=0; i<9; i++){
        scanf("%d",&a[i]);
      
    }
    max=a[0];
    for(i=0; i<9; i++){
        if(max<a[i]){
          max=a[i];
          s=i;
        }
    }
  printf("%d ",max);
  printf("%d",s+1);

    return 0;
}