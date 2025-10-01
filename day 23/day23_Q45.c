#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
