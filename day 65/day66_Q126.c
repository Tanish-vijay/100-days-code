#include <stdio.h>

int main(){
  char filename[100];
  FILE *fptr;

  printf("Enter the file's name: \n");
  scanf("%s", &filename);

  fptr = fopen(filename, "r");

  if (fptr == NULL){
    printf("File not found.");
  }
  else{
    char ch;
    printf("File Content: \n");

    while ((ch = fgetc(fptr)) != EOF){
      putchar(ch);
    }
  }

  fclose(fptr);

  getchar ();
  getchar ();

  return 0;


}