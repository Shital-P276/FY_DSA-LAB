#include <stdio.h>

int main(void) {
  int A[100];
  printf("Enter size of Array :");
  int n;
  scanf("%d", &n);
  printf("Enter elements of Array :\n");

  for (int i = 0; i < n; i++) {
    printf("Enter element %d :", i + 1);
    scanf("%d", &A[i]);
  }

  int p, x;
  printf("Enter position and value to be inserted : ");
  scanf(" %d %d", &p, &x);

  for (int i = n - 1; i >= p - 1; i--) {
    A[i + 1] = A[i];
  }

  A[p] = x;

  printf("Array Elements are :");
  for (int i = 0; i < n + 1; i++) {
    printf("\n %d \n", A[i]);
  }
}
