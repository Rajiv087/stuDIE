#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL; 
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void insertAtPosition(struct Node** head_ref, int new_data, int position) {
    if (position < 1) {
        printf("Position should be >= 1.\n");
        return;
    }
    if (position == 1) {
        insertAtBeginning(head_ref, new_data);
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    struct Node* temp = *head_ref;  
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range.\n");
        free(new_node);
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void deleteFromBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) {
        return;
    }
    struct Node* temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}

void deleteFromEnd(struct Node** head_ref) {
    if (*head_ref == NULL) {
        return;
    }
    struct Node* temp = *head_ref;
    if (temp->next == NULL) {
        *head_ref = NULL;
        free(temp);
        return;
    }
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteFromPosition(struct Node** head_ref, int position) {
    if (*head_ref == NULL || position < 1) {
        return;
    }
    struct Node* temp = *head_ref;
    if (position == 1) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;
    insertAtBeginning(&head, 20); 
    insertAtBeginning(&head, 10); 
    insertAtEnd(&head, 40);       
    insertAtPosition(&head, 30, 3); 

    printList(head);

    deleteFromBeginning(&head);
    printList(head);

    deleteFromEnd(&head);
    printList(head);

    deleteFromPosition(&head, 2);
    printList(head);

    struct Node* current = head;
    struct Node* next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    return 0;
}