#include <stdio.h>

void selectionsort(int arr[], int n);

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
    printf("%d \t", arr[i]);
  }
  printf("\n");

  selectionsort(arr, n);

  printf("\nSorted array: \n");
  for (int i = 0; i <= n - 1; i++) {
    printf("%d \t", arr[i]);
  }
  return 0;
}

void selectionsort(int arr[], int n) {
  int i, j, min_idx;

  // One by one move the boundary of the unsorted subarray
  for (i = 0; i < n - 1; i++) {
    // Find the minimum element in the unsorted array
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    // Swap the found minimum element with the first element
    if (min_idx != i){
      int temp;
      temp = arr[i];
      arr[i] = arr[min_idx];
      arr[min_idx] = temp;
    }
  }
}
