#include <stdio.h>

struct Student{
  char name[50];
  int roll_num;
  int marks;
};

int main(){
  struct Student S;

  printf("Enter your name: \n");
  fgets(S.name, sizeof(S.name), stdin);
  for (int i = 0; S.name[i] != '\0'; i++){
    if (S.name[i] == '\n'){
      S.name[i] = '\0';
    }
  }
  
  printf("Enter your roll number: \n");
  scanf("%d", &S.roll_num);

  printf("Enter your marks: \n");
  scanf("%d", &S.marks);

  printf("Name: %s || Roll: %d || Marks: %d", S.name, S.roll_num, S.marks);


  getchar ();
  getchar ();

  return 0;

}