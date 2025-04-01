#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[100][100] = { 0 };
    int B[100][100] = { 0 };

    int sum[100][100] = { 0 };

    for (int i = 0;i < N;i++) {
        for (int j = 0;j < M;j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0;i < N;i++) {
        for (int j = 0;j < M;j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0;i < N;i++) {
        for (int j = 0;j < M;j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0;i < N;i++) {
        for (int j = 0;j < M;j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}
