#include<stdio.h>

int main() {
	int N, arr[1000];
	int tmp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-1; j++) {
			if (arr[j + 1] < arr[j]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}