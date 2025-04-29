#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char S[100];
    scanf("%s", S);

    char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

        int count = 0;
       
        for (int i = 0;i < 26;i++) {
            for (int j = 0;j < strlen(S);j++) {
                if (alphabet[i] == S[j]) {
                    printf("%d ", j);
                    break;
                }
                if (j == strlen(S)-1) {
                    printf("-1 ");
                    break;
                }
                
            }
        }

}
