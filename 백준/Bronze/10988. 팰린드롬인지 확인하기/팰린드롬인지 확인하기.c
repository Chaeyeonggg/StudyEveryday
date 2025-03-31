#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char w[100];
    scanf("%s", w);

    char p[100];

    for (int i = 0;i < strlen(w);i++) {
        p[i] = w[strlen(w) - (i+1)];
    }

    for (int i = 0;i < strlen(w);i++) {
        if (p[i] != w[i]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    
}
