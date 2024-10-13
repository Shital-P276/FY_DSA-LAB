#include <stdio.h>

// Function to insert a value at a given position in an array
void insertValueAtPosition(int array[], int *size, int position, int value) {
  // Shift elements to the right to make space for the new value
  for (int i = *size; i >= position; i--) {
    array[i] = array[i - 1];
  }

  // Insert the new value at the specified position
  array[position - 1] = value;

  // Increment the size of the array
  (*size)++;
}

int main() {
  int size;

  // Get the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];

  // Input the initial array elements
  printf("Enter %d elements for the array:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  int n;
  printf("Enter the number of insertions: ");
  scanf("%d", &n);

  // Input values and positions for insertion
  for (int i = 0; i < n; i++) {
    int position, value;

    // Get position and value to insert
    printf("Enter the position %d to insert value: ",i);
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Check if the position is valid
    if (position < 1 || position > size + 1) {
      printf("Invalid position! Please enter a valid position.\n");
      i--; // Decrement i to re-enter values for this position
    } else {
      // Call the function to insert the value at the given position
      insertValueAtPosition(array, &size, position, value);
    }
  }

  // Display the updated array
  printf("Array after insertion:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  return 0; // Exit successfully
}
