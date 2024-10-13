#include <stdio.h>
#include <string.h>
int n;
struct student {
  char name[40];
  int roll;
  float marks;
};

int main(void) {
  printf("Enter number of students: ");
  scanf("%d", &n);
  struct student s[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &s[i].roll);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &s[i].marks);
    printf("\n");
  }
  printf("Name \t Roll \t Marks\n---- \t ---- \t -----\n");
  for (int i = 0; i < n; i++) {
    printf("%s \t %d \t   %f \n", s[i].name, s[i].roll, s[i].marks);
  }
}
