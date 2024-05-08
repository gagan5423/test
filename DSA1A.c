

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int array[MAX_SIZE];
int size = 0;

void createArray() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    size = n;
    printf("Array created successfully.\n");
}

void displayArray() {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertElement() {
    int pos, element, i;
    if (size == MAX_SIZE) {
        printf("Array is full, cannot insert more elements.\n");
        return;
    }
    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &pos);

    if (pos < 0 || pos > size) {
        printf("Invalid position!\n");
        return;
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    for (i = size; i > pos; i--) {
        array[i] = array[i - 1];
    }
    array[pos] = element;
    size++;
    printf("Element inserted successfully.\n");
}

void deleteElement() {
    int pos, i;
    if (size == 0) {
        printf("Array is empty, nothing to delete.\n");
        return;
    }
    printf("Enter the position to delete the element (0 to %d): ", size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return;
    }
    for (i = pos; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
    printf("Element deleted successfully.\n");
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Create an array\n");
        printf("2. Display array elements\n");
        printf("3. Insert an element\n");
        printf("4. Delete an element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:createArray();break;
            case 2:displayArray();break;
            case 3:insertElement();break;
            case 4:deleteElement();break;
            case 5:printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);
    printf("DONE");
    return 0;
}
