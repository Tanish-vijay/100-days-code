#include <stdio.h>

int main() {
    long binary, temp, rev = 0;
    
    printf("Enter a binary number: ");
    scanf("%ld", &binary);
    
    temp = binary;

    // Reverse the binary number first to handle digits correctly
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("1's complement: ");
    while(rev > 0) {
        int digit = rev % 10;
        if(digit == 0)
            printf("1");
        else if(digit == 1)
            printf("0");
        else {
            printf("\nError: Not a binary number.\n");
            return 1;
        }
        rev /= 10;
    }
    printf("\n");

    return 0;
}
