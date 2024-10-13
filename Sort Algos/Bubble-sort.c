#include <stdio.h>

void bubbleSort(int arr[], int n) {
  int pass, i, temp, swapcount = 0;
  for (pass = 0; pass < n - 1; pass++) {
    for (i = 0; i < n - pass - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapcount++;
      }
    }
    if (swapcount == 0) {
      printf("\nArray is already sorted.\n");
      return;
    }
  }
  if (swapcount != 0) {
    printf("\nSorted array: \n");
    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("\nEnter %d integers: \n", n);
  for (int i = 0; i < n; i++) {
    printf("Enter element [%d]: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\nOriginal array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  bubbleSort(arr, n);

  return 0;
}
