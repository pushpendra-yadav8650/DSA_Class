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

// Function to delete the node after a specific element
void deleteAfter(struct Node* head, int target) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;

    // Traverse the list to find the target element
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    // If the target element is not found or there is no node after it
    if (temp == NULL || temp->next == NULL) {
        printf("No node exists after element %d, or element %d is not found.\n", target, target);
        return;
    }

    // Delete the node after the target
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    printf("Deleted element: %d\n", nodeToDelete->data);
    free(nodeToDelete);
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

    // Delete a node after a specific element
    deleteAfter(head, 20);
    printf("After deletion ");
    displayList(head);

    // Attempt to delete after a non-existent element
    deleteAfter(head, 50);

    // Attempt to delete after the last element
    deleteAfter(head, 40);

    return 0;
}
