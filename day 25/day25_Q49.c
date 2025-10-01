#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {               // Rows
        for(j = 6 - i; j <= 5; j++) {       // Numbers in each row
            printf("%d", j);
        }
        printf("\n");                       // Next line after each row
    }

    return 0;
}
