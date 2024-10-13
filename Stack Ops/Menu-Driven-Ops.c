#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// isEMPTY func
bool isEmpty() { return top == -1; }

// isFULL func
bool isFull() { return top == MAX_SIZE - 1; }

// Display func
void display_stack(int stack[], int top) {
  if (isEmpty()) {
    printf("\nStack is empty.\n");
  } else {
    for (int i = top; i >= 0; i--) {
      printf("%d\n", stack[i]);
    }
  }
}

// Push func
void push(int value) {
  if (isFull()) {
    printf("\nStack is full. Cannot push.\n");
  } else {
    top++;
    stack[top] = value;
    printf("\nStack after operation: \n");
    display_stack(stack, top);
  }
}

// pop func
int pop() {
  if (isEmpty()) {
    printf("\nStack is empty. Cannot pop.\n");
    return -1; //-1 is error code for underflow
  } else {
    int value = stack[top];
    top--;
    printf("Popped Element : %d", value);
    printf("\nStack after operation: \n");
    display_stack(stack, top);
    return value;
  }
}

// peek func
int peek() {
  if (isEmpty()) {
    printf("\nStack is empty. Cannot peek.\n");
    return -1; //-1 is error code for underflow
  } else {
    return stack[top];
  }
}

// destroy stack func
void destroy_stack() {
  while (!isEmpty()) {
    pop();
  }
  // printf("\nStack after operation: \n");
  // display_stack(stack, top);
}

int main() {
  int x, choice;
  do {
    printf("\n\nSelect stack  operation to perform:\n 1]Push \n 2]Pop \n "
           "3]isFULL \n "
           "4]isEMPTY \n 5]Peek \n 6]Destroy stack \n 7]Display Stack \n 8]Exit \nEnter your "
           "choice:");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the value to push: ");
      scanf("%d", &x);
      push(x);
      break;

    case 2:
      pop();
      break;

    case 3:
      if (isFull()) {
        printf("\nStack is full\n");
      } else {
        printf("\nStack is not full\n");
      }
      break;

    case 4:
      if (isEmpty()) {
        printf("\nStack is empty\n");
      } else {
        printf("\nStack is not empty\n");
      }
      break;

    case 5:
      if (peek() == -1) {
        printf("\nStack is empty\n");
      } else {
        printf("\nTop element: %d\n", peek());
      }
      break;
      
    case 6:
      destroy_stack();
      break;

    case 7:
      printf("\nStack: \n");
      display_stack(stack, top);
      break;

    case 8:
      printf("\nExiting program...\n");
      break;

    default:
      printf("\nInvalid choice. Please try again.\n");
    }

  } while (choice != 8);

  return 0;
}
