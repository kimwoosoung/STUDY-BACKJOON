#include <stdio.h>

int main() {
    int i, count, num;
    int arr[10000];
    scanf("%d %d", &count, &num);
    
    for (i = 0; i < count; i++){
        scanf("%d", &arr[i]);
        if(arr[i] < num)
            printf("%d ", arr[i]);
    }
}
