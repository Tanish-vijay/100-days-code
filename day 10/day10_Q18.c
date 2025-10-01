#include <stdio.h>

int main() {
    int a, b, c;

    // Input all three sides
    scanf("%d %d %d", &a, &b, &c);

    // if valid triangle using triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
