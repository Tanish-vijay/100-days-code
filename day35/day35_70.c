#include <stdio.h>

int main() {
    int n, k, i;
    
    // Input number of elements
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number of positions to rotate
    scanf("%d", &k);
    
    // Handle case where k >= n
    k = k % n;
    
    // Rotate the array to the right by k positions
    for (i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
getchar ();
getchar ();
