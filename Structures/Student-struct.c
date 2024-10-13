#include <stdio.h>

struct Student {
  long int PRN;
  char Name[50];
  int Semester;
  int Year;
  float CGPA;
};

// Read Func
void Read(struct Student *student) {
  printf("Enter PRN: ");
  scanf("%ld", &student->PRN);

  printf("Enter Name: ");
  scanf("%s", student->Name);

  printf("Enter Semester (1-8): ");
  scanf("%d", &student->Semester);

  printf("Enter Year (YYYY): ");
  scanf("%d", &student->Year);

  printf("Enter CGPA: ");
  scanf("%f", &student->CGPA);
}

// Dispklay Func
void display(struct Student student) {
  printf("\nPRN: %ld\n", student.PRN);
  printf("Name: %s\n", student.Name);
  printf("Semester: %d\n", student.Semester);
  printf("Year: %d\n", student.Year);
  printf("CGPA: %.2f\n", student.CGPA);
}

// Initialization Func
void initialize(struct Student *student) {
  student->PRN = 0;
  student->Name[0] = '\0';
  student->Semester = 0;
  student->Year = 0;
  student->CGPA = 0.0;
}

int main() {
  struct Student s;

  initialize(&s);

  printf("Enter student details:\n\n");
  Read(&s);

  printf("\nStudent Details:\n");
  display(s);

  return 0;
}
