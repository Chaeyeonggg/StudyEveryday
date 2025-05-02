#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    char S[102];
    
    while (fgets(S, sizeof(S), stdin) != NULL) {
            printf("%s", S);
    }

}
