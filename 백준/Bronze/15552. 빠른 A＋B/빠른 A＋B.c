#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while (1) {
        if (T == 0)
            break;
        int A, B;
        scanf("%d %d", &A, &B);

        printf("%d\n", A + B);
        T--;
    }
}
