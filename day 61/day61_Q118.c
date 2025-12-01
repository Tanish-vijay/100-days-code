#include <stdio.h>

int main(){
  int len;
  printf("Enter length of the array: \n");
  scanf("%d", &len);
  int nums[len];

  for (int i = 0; i < len; i++){
    printf("Enter element number %d: \n", i + 1);
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < len - 1; i++){
    for (int j = 0; j < len - 1; j++){
      if (nums[j] > nums[j+1]){
        int temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }

  int missing = -1;
  for (int i = 0; i < len; i++){
      if (nums[i] != i){
      missing = i;
      break;
      }
    }

  if (missing == -1){
    missing = len;
  }

  printf("The Missing Number is: %d", missing);


  getchar  ();
  getchar ();
  
  return 0;


}