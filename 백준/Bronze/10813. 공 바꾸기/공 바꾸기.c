#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);

	int arr[100] = {0};
	for (int i = 1;i <= N;i++) {
		arr[i] = i;
	}

	for (int i = 0;i < M;i++) {
		int I, J;
		int tmp;
		scanf("%d %d", &I, &J);
		tmp = arr[I];
		arr[I] = arr[J];
		arr[J] = tmp;
	}
	
	for (int i = 1; i <=N;i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}