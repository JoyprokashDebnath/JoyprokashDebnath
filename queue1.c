#include <stdio.h>

#define MAX 5  // Small size for easy understanding

// Global variables
int queue[MAX];
int front = -1;  // Points to first element
int rear = -1;   // Points to last element

// Function to add element to queue (at rear)
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full! Cannot add %d\n", value);
        return;
    }
    
    if (front == -1) {
        front = 0;  // First element being added
    }
    
    rear++;
    queue[rear] = value;
    printf("Added %d to queue\n", value);
}

// Function to remove element from queue (from front)
void dequeue() {
    if (front == -1) {
        printf("Queue is empty! Nothing to remove\n");
        return;
    }
    
    printf("Removed %d from queue\n", queue[front]);
    
    if (front == rear) {
        // Queue becomes empty
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

// Function to show all elements in queue
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    
    printf("Queue elements (front to rear): ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Function to show front element without removing
void peek() {
    if (front == -1) {
        printf("Queue is empty! Nothing at front\n");
        return;
    }
    
    printf("Front element: %d\n", queue[front]);
}

int main() {
    int choice, value;
    printf("=== Simple Queue Demo ===\n\n");

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}ksbHbe5#jwbubFK@iV2Hn@hC£J&2jwn