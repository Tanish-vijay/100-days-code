#include <stdio.h>
 
int main(){
  int len, k;

  printf("Enter the length of array: \n");
  scanf("%d", &len);
  int nums[len];
  for (int i = 0; i < len; i++){
    printf("Enter element %d: \n", i+1);
    scanf("%d", &nums[i]);
  }
  printf("Enter the size of sub arrays you want: \n");
  scanf("%d", &k);

  for (int i = 0; i <= len-k; i++){
    int firstneg = 0;
    for (int j = i; j < i + k; j++){
        if (nums[j] < 0){
          firstneg = nums[j];
          break;
        }
      }
      printf("%d ", firstneg);
    }
    
    getchar ();
    getchar ();
    
    return 0;


}
