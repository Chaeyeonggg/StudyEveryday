#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int a1, a2, a3;
    int b1, b2, b3;

    a1 = A / 100;
    a2 = (A - (a1 * 100)) / 10;
    a3 = A % 10;

    b1 = B / 100;
    b2 = (B - (b1 * 100)) / 10;
    b3 = B % 10;

    int A1, B1;

    A1 = (a3 * 100) + (a2 * 10) + a1;
    B1 = (b3 * 100) + (b2 * 10) + b1;

    if (A1 > B1)
        printf("%d", A1);
    else
        printf("%d", B1);

}
