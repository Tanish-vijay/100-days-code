#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int nums[len];
    for (int i = 0; i < len; i++){
        printf("Enter element %d: \n", i+1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - 1; j++){
            if (nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("Your array is: \n");
    for (int i = 0; i<len; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");


    int x, res = -1;
    printf("Enter the value of x: \n");
    scanf("%d", &x);


    for (int i = 0; i < len; i++){
      if (x <= nums[i]){
          res = i;
          break;
      }
    }
    if (res != -1){
    printf("The index of element greater than or equal to %d in the array is %d. The number is %d.", x,res, nums[res]);
    }
    else{
      printf("Element greater than %d does not exist. -1", x);
    }

    getchar ();
    getchar ();

    return 0;

}