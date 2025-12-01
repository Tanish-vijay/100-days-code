#include <stdio.h>

enum Days {
 Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};  

int main(){
  const char *dayNames[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
  };

  for (int i = Sunday; i <= Saturday; i++){
    printf("%s = %d\n",dayNames[i], i);
  }
  
  getchar ();
  getchar ();

  return 0;

}