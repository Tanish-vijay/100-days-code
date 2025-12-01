#include <stdio.h>

enum Colors {
  RED = 10, YELLOW = 20, GREEN = 30
};

int main(){

  enum Colors c;

  printf("Red: %d\n", RED);

  printf("Yellow: %d\n", YELLOW);

  printf("Green: %d\n", GREEN);

  getchar ();
  getchar ();

  return 0;

}