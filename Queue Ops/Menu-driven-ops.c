#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100
int queue[MAX_SIZE];
int f = -1; // front pointer
int r = -1; // rear pointer

// isEMPTY function
bool isEmpty() { return r == -1 && f == -1; }

// isFULL function
bool isFull() { return MAX_SIZE - 1 == r; }

// display function
void display_queue(int queue[], int f, int r) {
  if (isEmpty()) {
    printf("\nQueue is empty.\n");
  } else {
    printf("\nQueue after operation: \n");
    for (int i = f; i <= r; i++) {
      printf("%d  ", queue[i]);
    }
    printf(" \n");
  }
}

// enqueue function
void enqueue(int data) {
  if (isFull()) {
    printf("Queue is full");
  } else if (f == -1 && r == -1) {
    f = r = 0;
    queue[r] = data;
    display_queue(queue, f, r);
  } else {
    r++;
    queue[r] = data;
    display_queue(queue, f, r);
  }
}

// dequeue function
void dequeue() {
  if (isEmpty()) {
    printf("Queue is empty");
  } else if (f == r) {
    printf("Deleted Data : %d", queue[f]);
    f = r = -1;
    display_queue(queue, f, r);
  } else {
    printf("Deleted Data : %d", queue[f]);
    f++;
    display_queue(queue, f, r);
  }
}

// peek function
void peek() {
  if (isEmpty()) {
    printf("Queue is empty");
  } else {
    printf("\nFront/Peeked Data : %d \n", queue[f]);
  }
}

int main(void) {
  int choice, data;
  do {
    printf("\n\nSelect Queue Operation :\n 1. Enqueue\n 2. Dequeue\n 3. Peek\n "
           "4. isEMPTY\n 5. isFULL\n 6. Exit"
           "\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\nEnter data to enqueue: ");
      scanf("%d", &data);
      enqueue(data);
      break;

    case 2:
      dequeue();
      break;

    case 3:
      peek();
      break;

    case 4:
      if (isEmpty()) {
        printf("\nQueue is empty\n");
      } else {
        printf("\nQueue is not empty\n");
      }
      break;

    case 5:
      if (isFull()) {
        printf("\nQueue is full\n");
      } else {
        printf("\nQueue is not full\n");
      }
      break;

    case 6:
      printf("Exiting program...");
      break;

    default:
      printf("Invalid choice. Please try again.\n");
      break;
    }
  } while (choice != 6);
}
