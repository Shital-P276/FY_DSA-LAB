#include <stdio.h>

void merge(int arr[], int start1, int end1, int start2, int end2);
void mergesort(int arr[], int start, int end);

int main(void) {
  int arr[30], n, i;
  //USER INPUT
  printf("Enter the number of elements in the array :");
  scanf("%d", &n);

  printf("\nEnter the elements of the array\n");
  for (i = 0; i < n; i++) {
    printf("Enter Element [%d] :", i + 1);
    scanf("%d", &arr[i]);
  }
  //OUTPUT
  printf("\nOriginal array :\n");
  for (i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  printf("\n");

  mergesort(arr, 0, n - 1);

  printf("\nSorted array :\n");
  for (i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

void mergesort(int arr[], int start, int end) {
  int mid;
  if (start < end) {
    mid = (start + end) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, mid + 1, end);
  }
}

void merge(int arr[], int start1, int end1, int start2, int end2) {
  int x = sizeof(arr);
  int temp[x];
  int i, j, k;
  i = start1;
  j = start2;
  k = 0; // index of temp array
  while (i <= end1 && j <= end2) {
    if (arr[i] < arr[j])
      temp[k++] = arr[i++];
    else
      temp[k++] = arr[j++];
  }
  while (i <= end1) // copy remaining elements of subarray 1
    temp[k++] = arr[i++];
  while (j <= end2) // copy remaining elements of subarray 2
    temp[k++] = arr[j++];
  for (i = start1, j = 0; i <= end2;
       i++, j++) // shift elements from temp array to original array
    arr[i] = temp[j];
}
