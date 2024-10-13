#include <stdio.h>
#include <string.h>
int n;
struct student {
  int PRN;
  char name[40];
  int sem;
  int year;
  float gpa;
};

void read(struct student s[n]) {
  for (int i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter the PRN of student %d: ", i + 1);
    scanf("%d", &s[i].PRN);
    printf("Enter the Year of student %d: ", i + 1);
    scanf("%d", &s[i].year);
    printf("Enter the semester of student %d: ", i + 1);
    scanf("%d", &s[i].sem);
    printf("Enter the GPA of student %d: ", i + 1);
    scanf("%f", &s[i].gpa);
    printf("\n");
  }
}

void print(struct student s[n]) {
 
  for (int i = 0; i < n; i++) {
    printf("NAME : %s \nPRN : %d \nYEAR : %d \nSEM : %d\nGPA : %f\n\n ", s[i].name, s[i].PRN, s[i].year,
           s[i].sem, s[i].gpa);
  }
}

int main(void) {
  printf("Enter number of students: ");
  scanf("%d", &n);
  struct student s[n];
  read(&s[n]);
  print(&s[n]);
}
