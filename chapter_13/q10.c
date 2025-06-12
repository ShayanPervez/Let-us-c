#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Define the size of deque

char deque[SIZE];
int left = -1, right = -1;

// Function to check if deque is full
int isFull() {
    return (left == 0 && right == SIZE - 1) || (left == right + 1);
}

// Function to check if deque is empty
int isEmpty() {
    return (left == -1);
}

// Insert at the right end
void insertRight(char item) {
    if (isFull()) {
        printf("Deque Overflow! Cannot insert '%c' at right\n", item);
        return;
    }
    if (isEmpty()) { // First element insertion
        left = right = 0;
    } else if (right == SIZE - 1) {
        right = 0; // Wrap around
    } else {
        right++;
    }
    deque[right] = item;
    printf("Inserted '%c' at right\n", item);
}

// Insert at the left end
void insertLeft(char item) {
    if (isFull()) {
        printf("Deque Overflow! Cannot insert '%c' at left\n", item);
        return;
    }
    if (isEmpty()) { // First element insertion
        left = right = 0;
    } else if (left == 0) {
        left = SIZE - 1; // Wrap around
    } else {
        left--;
    }
    deque[left] = item;
    printf("Inserted '%c' at left\n", item);
}

// Delete from the left end
void deleteLeft() {
    if (isEmpty()) {
        printf("Deque Underflow! Cannot delete from left\n");
        return;
    }
    printf("Deleted '%c' from left\n", deque[left]);
    if (left == right) { // Only one element
        left = right = -1;
    } else if (left == SIZE - 1) {
        left = 0; // Wrap around
    } else {
        left++;
    }
}

// Delete from the right end
void deleteRight() {
    if (isEmpty()) {
        printf("Deque Underflow! Cannot delete from right\n");
        return;
    }
    printf("Deleted '%c' from right\n", deque[right]);
    if (left == right) { // Only one element
        left = right = -1;
    } else if (right == 0) {
        right = SIZE - 1; // Wrap around
    } else {
        right--;
    }
}

// Display the deque
void display() {
    int i;
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque contents: ");
    i = left;
    while (1) {
        printf("%c ", deque[i]);
        if (i == right)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    insertRight('A');
    insertRight('B');
    insertLeft('C');
    insertLeft('D');
    insertRight('E');
    display();

    deleteLeft();
    display();

    deleteRight();
    display();

    insertLeft('F');
    display();

    insertRight('G'); // Should show overflow
    return 0;
}
