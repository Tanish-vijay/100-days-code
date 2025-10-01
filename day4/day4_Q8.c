#include <stdio.h>

int main() {
    int n, i, sum = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Output the result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
