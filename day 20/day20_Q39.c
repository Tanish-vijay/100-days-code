#include <stdio.h>

int main() {
    int num, digit;
    int product = 1; // Initialize product as 1
    int hasOdd = 0;  // Flag to check if there's any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) num = -num; // Handle negative numbers

    while(num > 0) {
        digit = num % 10;
        if(digit % 2 != 0) { // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if(!hasOdd) {
        product = 1; // If no odd digit found
    }

    printf("Product of odd digits: %d\n", product);

    return 0;
}
