#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);

    int quarter;
    int dime;
    int nickel;
    int penny;

    while (T != 0) {
        int C;
        scanf("%d", &C);

        quarter = C / 25;
        C = C - (25 * quarter);
        dime = C / 10;
        C = C - (10 * dime);
        nickel = C / 5;
        C = C - (nickel * 5);
        penny = C / 1;
        
        printf("%d %d %d %d\n", quarter, dime, nickel, penny);



        T--;
    }

}
