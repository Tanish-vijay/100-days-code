#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // To handle larger products

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) { // iterate only over even numbers
        product *= i;
    }

    // If no even numbers (n < 2), product is 0
    if(n < 2) {
        printf("No even numbers to multiply\n");
    } else {
        printf("%llu\n", product);
    }

    return 0;
}
