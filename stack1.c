#include <stdio.h>

#define MAX 5  // Small size for easy understanding

// Global variables
int stack[MAX];
int top = -1;  // -1 means empty stack

// Function to add element to stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack is full! Cannot add %d\n", value);
        return;
    }
    
    top++;
    stack[top] = value;
    printf("Added %d to stack\n", value);
}

// Function to remove element from stack
void pop() {
    if (top == -1) {
        printf("Stack is empty! Nothing to remove\n");
        return;
    }
    
    printf("Removed %d from stack\n", stack[top]);
    top--;
}

// Function to show all elements in stack
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    printf("=== Simple Stack Demo ===\n\n");

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}