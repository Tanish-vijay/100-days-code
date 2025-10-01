#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        int digit = num % 10;       
        reversed = reversed * 10 + digit; // it to reversed number
        num /= 10;                  
    }

    printf("%d\n", reversed);

    return 0;
}
