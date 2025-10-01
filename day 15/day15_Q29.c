#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%llu\n", factorial);
    }

    return 0;
}
