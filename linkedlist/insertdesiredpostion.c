#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert a node after a desired element
void insertAfter(struct Node* head, int target, int newData) {
    struct Node* temp = head;

    // Traverse the list to find the target element
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element %d not found in the list.\n", target);
        return;
    }

    // Create a new node and insert it after the target
    struct Node* newNode = createNode(newData);
    newNode->next = temp->next;
    temp->next = newNode;

    printf("Inserted %d after %d.\n", newData, target);
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Initialize the head of the list

    // Insert predefined values into the linked list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printf("Original ");
    displayList(head);

    // Insert a new node after a specific element
    insertAfter(head, 20, 25);
    printf("After insertion ");
    displayList(head);

    // Attempt to insert after a non-existent element
    insertAfter(head, 50, 35);
    printf("Final ");
    displayList(head);

    return 0;
}
