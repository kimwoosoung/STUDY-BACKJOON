#include <stdio.h>

int main() {
    long long int n,res=0;
    scanf("%lld",&n);
    for(int i=0; i<n; i++){
        res++;
        printf("%lld\n",res);
    }

    return 0;
}