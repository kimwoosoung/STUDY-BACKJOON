#include <stdio.h>
#include <string.h>
int main() {
    int n,cnt = 0;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        char arr[1001], visit[1001];
        scanf("%s", arr);
        char before = arr[0];
        int visit_cnt = 0;
        int flag = 1, num = strlen(arr);
        for(int idx = 0;idx<num;idx++){
            for(int j = 0;j<visit_cnt;j++){
                if(arr[idx] == visit[j]){
                    flag = 0;
                    break;
                }
            }
            if(arr[idx] != before){
                visit[visit_cnt] = before;
                visit_cnt += 1;
            }
            before = arr[idx];
        }
        if(flag == 1){
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}