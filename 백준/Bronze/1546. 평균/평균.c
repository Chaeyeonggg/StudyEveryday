#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N;
	scanf("%d", &N);

	double arr[1000] = { 0 };
	for (int i = 0;i < N;i++) {
		scanf("%lf", &arr[i]);
	}

	double max = arr[0];

	for(int i = 0;i < N;i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	double sum = 0;
	for(int i = 0;i < N;i++) {
		arr[i] = (arr[i] / max) * 100;
		sum += arr[i];
		
	}

	printf("%.2lf", sum / N);

	return 0;
}