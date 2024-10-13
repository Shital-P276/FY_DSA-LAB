#include <stdio.h>

int binarysearch(int arr[], int n, int x);

int main(void) {

  int arr[50];
  int n, i, x;

  printf("Enter size of the array : ");
  scanf("%d", &n);
  printf("\nEnter (sorted) elements in the array: \n");
  for (i = 0; i < n; i++) {
    printf("Enter element [%d]: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\nEnter number to be searched :");
  scanf("%d", &x);

  int result = binarysearch(arr, n, x);
  if (result != -1) {
    printf("Element Found at position %d", result + 1);
  } else if (result == -1) {
    printf("Element is not present in array");
  }

  return 0;
}

int binarysearch(int arr[], int n, int x) {

  int start = 0, end = n - 1, mid;

  while (start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      start = mid + 1;
    } else if (arr[mid] > x) {
      end = mid - 1;
    }
  }
  return -1;
}
