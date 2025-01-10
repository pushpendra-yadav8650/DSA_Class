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

// Function to delete the last node of the linked list
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        // If the list is empty
        printf("The list is already empty.\n");
        return;
    }

    struct Node* temp = *head;

    // If the list has only one node
    if (temp->next == NULL) {
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    // Traverse to the second last node
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Delete the last node
    printf("Deleted element: %d\n", temp->data);
    free(temp);
    prev->next = NULL;
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

    // Delete nodes from the end
    deleteAtEnd(&head);
    printf("After deletion ");
    displayList(head);

    deleteAtEnd(&head);
    printf("After another deletion ");
    displayList(head);

    deleteAtEnd(&head);
    deleteAtEnd(&head);
    deleteAtEnd(&head); // Attempt to delete from an empty list

    return 0;
}
 