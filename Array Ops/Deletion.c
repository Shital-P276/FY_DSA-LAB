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

  int p;
  printf("Enter position to be deleted : ");
  scanf(" %d", &p);

  for (int i = p - 1; i <= n - 1; i++) {
    A[i] = A[i + 1];
  }
  printf("Array after deletion :\n");
  for (int i = 0; i < n - 1; i++) {
    printf("\n %d \n", A[i]);
  }
}
