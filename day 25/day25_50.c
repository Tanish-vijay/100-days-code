#include <stdio.h>

int main() {
    int i, j;
    int n = 5;   // size of pattern

    for(i = 1; i <= n; i++) {                  // rows
        for(j = 1; j < i; j++) {               // spaces
            printf(" ");
        }
        for(j = i; j <= n; j++) {              // stars
            printf("*");
        }
        printf("\n");                          // next row
    }

    return 0;
}
