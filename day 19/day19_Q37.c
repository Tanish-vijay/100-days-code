#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;
    while(tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;

    lcm = (a * b) / hcf;

    printf("%d\n", lcm);

    return 0;
}
