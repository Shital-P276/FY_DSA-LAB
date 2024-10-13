#include <stdio.h>

int main(void) {
  int A[100];
  printf("Enter size of Array :");
  int n;
  scanf("%d", &n);
  printf("Enter elements of Array :");

  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  printf("Array Elements are :");
  for (int i = 0; i < n; i++) {
    printf("%d \n", A[i]);
  }
}
