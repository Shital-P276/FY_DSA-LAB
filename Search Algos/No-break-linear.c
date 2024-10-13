#include <stdio.h>

int main() {

  int arr[50];
  int n, i, x;

  printf("Enter size of the array: ");
  scanf("%d", &n);

  printf("\nEnter elements in the array: \n");
  for (i = 0; i < n; i++) {
    printf("Enter element [%d]: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\nEnter number to be searched: ");
  scanf("%d", &x);
  for (i = 0; i <= n; i++) {
    if (arr[i] == x) {
      printf("Number found at position %d \n ", i + 1);
    } else if (i == n) {
      printf("Element not found");
    }
  }
  return 0;
}
