#include<stdio.h>
int main() {
    int arr[100001];
    long long int sum[100001]={0};
    int n, m, num1, num2;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        sum[i] = sum[i-1] + arr[i];
    }
    for(int i = 1; i <= m; i++) {
        scanf("%d%d", &num1, &num2);
        printf("%lld\n", sum[num2]-sum[num1-1]);
    }
    return 0;
}