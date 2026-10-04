#include <stdio.h>
#include <stdlib.h>

struct Node{ 
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* start = NULL;

void insertAtBeginning() { 
    int value;
    printf("Enter element to insert at the beginning: ");
    scanf("%d",&value);

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;

    if (start == NULL) {
        temp-> next = temp ;
        temp-> prev = temp ;
        start = temp ;
        return ;
    }
    struct Node* last = start->prev;
    temp->next = start ;
    temp->prev = last ;
    last->next = temp;
    start->prev = temp;

    start = temp;
}

void insertAtEnd() {
    int value;
    printf("Enter element to insert at end: ");
    scanf("%d", &value);

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;

    if (start == NULL) {
        temp->next = temp;
        temp->prev = temp;
        start = temp;
        return;
    }

    struct Node* last = start->prev;

    last->next = temp;
    temp->prev = last;
    temp->next = start;
    start->prev = temp;
}

void insertAtPosition() {
    int value, position, count = 1;
    printf("Enter element and position: ");
    scanf("%d %d",&value, &position);

    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;

    if (start == NULL) {
        if (position!=1) {
            printf("Invalid position");
            free(temp);
            return;
        }
        temp->next = temp;
        temp->prev = temp;
        start = temp;
        return;
    }
    if (position == 1) {
        struct Node* last = start->prev;
        temp->next = start;
        temp->prev = last;
        last->next = temp;
        start->prev = temp;
        start = temp;
        return;
    }
    struct Node* curr = start;
    while (count < position-1 && curr->next != start){
        curr = curr->next;
        count++;
    }
    if (count < position -1) {
        printf("Invalid Position\n");
        free(temp);
        return;
    }
    struct Node* nextNode = curr->next;
    curr->next = temp;
    temp->prev = curr;
    temp->next = nextNode;
    nextNode->prev = temp;
}

void deleteAtBeginning() {
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = start;
    if (start->next == start) {
        start = NULL;
        free(temp);
        return;
    }
    struct Node* last = start->prev;
    start = start->next;
    start->prev = last;
    last->next = start;

    free(temp);
}

void deleteAtEnd() {
    if (start == NULL) {
        printf("Empty List\n");
        return;
    }
    struct Node* temp = start->prev;
    if (start->next == start) {
        start = NULL;
        free(temp);
        return;
    }

    struct Node* secondLast = temp->prev;
    secondLast->next = start;
    start->prev = secondLast;

    free(temp);
}

void deleteAtPosition() {
    int pos, count = 1;
    
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Enter position to delete: ");
    scanf("%d",&pos);

    if (pos == 1) {
        deleteAtBeginning();
        return;
    }
    struct Node* temp = start;
    while (count < pos && temp->next != start) {
        temp = temp->next;
        count++;
    }
    if (count < pos) {
        printf("Invalid position\n");
        return;
    }
    struct Node* prevNode = temp->prev;
    struct Node* nextNode = temp->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    free(temp);
}

void traverse() {
    if (start == NULL) {
        printf("Empty List\n");
        return;
    }
    struct Node* temp = start;
    do{
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp!= start);
    printf("Back to start\n");
}

int main() {
    printf("Insert at beginning: \n");
    insertAtBeginning();
    traverse();
    insertAtBeginning();
    traverse();
    insertAtBeginning();
    traverse();    

    printf("\n\nInsert at end: \n");
    insertAtEnd();
    traverse();

    printf("\n\nInsert at a specific position: \n");
    insertAtPosition();
    traverse();

    printf("\n\nDeletion at the beginning: \n");
    deleteAtBeginning();
    traverse();

    printf("\n\nDeletion at the end: \n");
    deleteAtEnd();
    traverse();

    printf("\n\nDeletion at specific position: \n");
    deleteAtPosition();
    traverse();

    return 0;
}