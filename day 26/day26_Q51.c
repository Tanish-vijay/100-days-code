#include <stdio.h>

int main() {
    int i, j, k;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for (k = i; k <= 5; k++) {
            printf("%d", k);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
