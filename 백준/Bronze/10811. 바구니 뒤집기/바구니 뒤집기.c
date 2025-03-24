#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);

	int arr1[101] = { 0 };
	int arr2[101] = { 0 };

	for (int i = 1;i <= N;i++) {
		arr1[i] = i;
	}

	for (int i = 1;i <= M;i++) {
		int I, J;
		scanf("%d %d", &I, &J);
		int originI = I;
		int originJ = J;

		if (I != J) {
			while (J > 0&&I<=originJ) {
				arr2[I] = arr1[J];
				I++;
				J--;
			}
			for (int l = originI;l <= originJ;l++) {
				arr1[l] = arr2[l];
			}
		}
		
	}
	for (int i = 1;i <= N;i++) {
		printf("%d ", arr1[i]);
	}

	return 0;
}