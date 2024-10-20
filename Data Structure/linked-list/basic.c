#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the front
void insertFront(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
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

// Function to insert a node in ascending order
void insertAscending(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Function to delete the first node
void deleteFirst(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete a node before a specified position
void deleteBeforePosition(struct Node** head, int pos) {
    if (*head == NULL || pos <= 1) {
        printf("Invalid position or list is too short.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    for (int i = 1; i < pos - 1; i++) {
        prev = temp;
        temp = temp->next;
        if (temp == NULL || temp->next == NULL) {
            printf("Invalid position.\n");
            return;
        }
    }
    if (prev != NULL) {
        struct Node* nodeToDelete = prev->next;
        prev->next = temp->next;
        free(nodeToDelete);
    } else {
        *head = temp->next;
        free(temp);
    }
}

// Function to delete a node after a specified position
void deleteAfterPosition(struct Node** head, int pos) {
    struct Node* temp = *head;
    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position or no node exists after this position.\n");
        return;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main menu-driven program
int main() {
    struct Node* head = NULL;
    int choice, value, pos;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Insert in ascending order\n");
        printf("4. Delete first node\n");
        printf("5. Delete node before specified position\n");
        printf("6. Delete node after specified position\n");
        printf("7. Print list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(&head, value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertEnd(&head, value);
                break;
            case 3:
                printf("Enter value to insert in ascending order: ");
                scanf("%d", &value);
                insertAscending(&head, value);
                break;
            case 4:
                deleteFirst(&head);
                break;
            case 5:
                printf("Enter position before which node should be deleted: ");
                scanf("%d", &pos);
                deleteBeforePosition(&head, pos);
                break;
            case 6:
                printf("Enter position after which node should be deleted: ");
                scanf("%d", &pos);
                deleteAfterPosition(&head, pos);
                break;
            case 7:
                printList(head);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
