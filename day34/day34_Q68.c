#include <stdio.h>

int main() {
    int n;
    // read number of elements
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    scanf("%d", &pos);

    // check if pos is valid (1 to n)
    if (pos < 1 || pos > n) {
        // invalid position, just print original or do nothing
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        return 0;
    }

    // shift elements left from pos to end
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n = n - 1; 

    // for printing the updated code 
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    getchar();
    getchar();


    return 0;
}
