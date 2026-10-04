#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtBeginning(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    struct Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    newNode->next = head;
    last->next = newNode;
    head = newNode;
}

void insertAtEnd(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    struct Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    last->next = newNode;
    newNode->next = head;
}

void insertAtPosition(int value, int pos) {
    if (pos <= 1 || head == NULL) {
        insertAtBeginning(value);
        return;
    }

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node *temp = head;
    int count = 1;
    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) {
        free(head);
        head = NULL;
        return;
    }

    struct Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    struct Node *temp = head;
    head = head->next;
    last->next = head;
    free(temp);
}

void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) {
        free(head);
        head = NULL;
        return;
    }

    struct Node *secondLast = head;
    while (secondLast->next->next != head) {
        secondLast = secondLast->next;
    }

    struct Node *last = secondLast->next;
    secondLast->next = head;
    free(last);
}

void deleteAtPosition(int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos <= 1) {
        deleteAtBeginning();
        return;
    }

    struct Node *temp = head;
    int count = 1;
    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head) {
        deleteAtEnd();
        return;
    }

    struct Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

void traverse() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

int main() {
    printf("Insertion at the beginnging: \n");
    insertAtBeginning(10);
    insertAtBeginning(20);
    traverse();
    
    
    printf("\nInsertion at the end: \n");
    insertAtEnd(30);
    traverse();
    
    printf("\nInsertion at specific position: \n");
    insertAtPosition(25, 2);
    traverse();
    
    printf("\nDelete at the beginnging: \n");
    deleteAtBeginning();
    traverse();
    
    printf("\nDelete at the end: \n");
    deleteAtEnd();
    traverse();
    
    printf("\nDelete at a specific position: \n");
    deleteAtPosition(2);
    traverse();
    
    return 0;
}