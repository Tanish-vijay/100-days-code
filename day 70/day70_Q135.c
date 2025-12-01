#include <stdio.h>

enum ExplicitVals {
  A = 10, B, C 
};

int main(){
  const char *values[] = {
    "A", "B", "C"
  };

  for (int i = A; i <= C; i++){
    printf("%s: %d\n", values[i - A], i);
  }
  getchar ();
  getchar ();

  return 0;
  

}