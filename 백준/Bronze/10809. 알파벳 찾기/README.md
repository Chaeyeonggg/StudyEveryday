# [Bronze II] 알파벳 찾기 - 10809 

[문제 링크](https://www.acmicpc.net/problem/10809) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2025년 4월 29일 15:43:03

### 문제 설명

<p>알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.</p>

### 출력 

 <p>각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ..결
```
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


```

처음에 외부 for문을 for (int i=0; i < alphabet(S); i++)로 작성했다.

alphabet 배열은 26개의 문자를 넣었지만 널문자 ('\0')가 없기 때문에 strlen(alphabet)이 제대로 작동하지 않았다.

strlen()은 문자열 끝을 알리는 널문자를 만나야 길이를 재는데 alphabet 배열에는 널문자가 없어서 엉뚱한 값을 계속 읽었다.

strlen(alphabet) 대신 26을 직접 씀으로써 오류를 해결했다.
















