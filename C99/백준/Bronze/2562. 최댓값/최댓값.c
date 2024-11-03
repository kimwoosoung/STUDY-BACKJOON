#include <stdio.h>

int main() {
    int input, a=0, b=0;
    for (int i = 1; i < 10; ++i) {
        scanf("%d", &input);
        if (input > a) {
            a = input;
            b = i;
        }
    }
    printf("%d\n%d\n", a, b);
    
    return 0;
}