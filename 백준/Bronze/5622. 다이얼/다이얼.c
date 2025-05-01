#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char text[15];
    scanf("%s", text);

    int count = 0;
    int seconds = 0;

    while (count != strlen(text)) {
        if (text[count] == 'A'||text[count]=='B'||text[count]=='C'){
                seconds += 3;
        }
        else if (text[count] == 'D' || text[count] == 'E' || text[count] == 'F') {
            seconds += 4;
        }
        else if (text[count] == 'G' || text[count] == 'H' || text[count] == 'I') {
            seconds += 5;
        }
        else if (text[count] == 'J' || text[count] == 'K' || text[count] == 'L') {
            seconds += 6;
        }
        else if (text[count] == 'M' || text[count] == 'N' || text[count] == 'O') {
            seconds += 7;
        }
        else if (text[count] == 'S' || text[count] == 'R' || text[count] == 'P' || text[count] == 'Q') {
            seconds += 8;
        }
        else if (text[count] == 'V' || text[count] == 'U' || text[count] == 'T') {
            seconds += 9;
        }
        else if (text[count] == 'W' || text[count] == 'X' || text[count] == 'Y' || text[count] == 'Z') {
            seconds += 10;
        }
        count++;
    }
    printf("%d", seconds);

}
