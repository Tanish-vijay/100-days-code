#include <stdio.h>

int main(){

    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Where do you want to reverse the array from: \n");
    scanf("%d", &pos);
    if (pos > len){
        pos = pos % len;
    }

    int start = 0;
    int end = len - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

 
    int newstart = 0, newend = pos - 1;
    while (newstart < newend){
        int newtemp = arr[newstart];
        arr[newstart] = arr[newend];
        arr[newend] = newtemp;
        newstart++;
        newend--;
    }
    
    int finalstart = pos, finalend = len - 1;
    while (finalstart < finalend){
        int finaltemp = arr[finalstart];
        arr[finalstart] = arr[finalend];
        arr[finalend] = finaltemp;
        finalstart++;
        finalend--;
    }

    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    return 0;
    
}