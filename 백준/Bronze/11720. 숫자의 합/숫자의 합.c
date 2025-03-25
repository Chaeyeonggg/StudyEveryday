#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    char NUM[100];
    scanf("%s", NUM);

    if (N == 1)
        printf("%c", NUM[0]);

    else {

        char arr[100];
        int sum = 0;

        for (int i = 0;i < N;i++) {
            strncpy(arr, NUM, 1);
        }
        for (int i = 0;i < N;i++) {
            sum += NUM[i] - '0';
        }
        printf("%d", sum);
    }
}
