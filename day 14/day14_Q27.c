#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += 2 * i - 1;  // formula for ith odd number
    }

    printf("%d\n", sum);

    return 0;
}
