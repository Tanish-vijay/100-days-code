#include <stdio.h>

int main(){
    
   
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int arr[len+1];
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }


    int pos,new;
    printf("Enter the position of the new element along with the element (Space Seperated): \n");
    scanf("%d %d", &pos, &new);


    for (int i = len; i > pos; i--) {
        arr[i] = arr[i - 1];
        
    }


    arr[pos] = new;
    pos = pos - 1;

    for (int i = 0; i < len+1; i++) {
    printf("%d ", arr[i]);
}
}