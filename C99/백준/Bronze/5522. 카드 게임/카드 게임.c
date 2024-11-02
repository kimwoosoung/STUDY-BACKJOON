#include <stdio.h>

int main() {
    int a, b = 0, i;
    for(i = 0; i < 5; i++) {
        scanf("%d", &a);
        b += a;
    }
    printf("%d\n", b);

    return 0;
}
