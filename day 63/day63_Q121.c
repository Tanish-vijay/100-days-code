#include <stdio.h>

int main(){
  FILE *fptr;
  fptr = fopen("info.txt", "w");
  char name[100];
  printf("Enter your name: \n");
  fgets(name, sizeof(name), stdin);
  
  for (int i = 0; name[i] != '\0'; i++){
    if (name[i] == '\n'){
      name[i] = '\0';
      break;
    }
  }

  int age;
  printf("Enter your age: \n");
  scanf("%d", &age);

  fprintf(fptr, "Name: %s\n", name);
  fprintf(fptr, "Age: %d\n", age);
  printf("File created successfully! Data written to info.txt");
  fclose(fptr);

  getchar ();
  getchar ();

  return 0;

}
