#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int T;
    scanf("%d", &T);

    while (T != 0) {
        int R;
        char S[20];
        scanf("%d %s", &R, S);

        for (int i = 0;i < strlen(S);i++) {
            for (int j = 0;j < R;j++) {
                printf("%c", S[i]);
            }
        }
        
        printf("\n");

        T--;
    }


}
