#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    
    if (rear == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    struct Node *temp = front;
    if (front == NULL) {
        printf("Queue underflow\n");
        return;
    }
    printf("Deleted Element is: %d\n", front->data);
    front = front->next;
    
    if (front == NULL) {
        rear = NULL;
    }
    
    free(temp);
}

void display() {
    struct Node *temp = front;
    if (front == NULL) {
        printf("Queue empty\n");
        return;
    }
    printf("Queue elements are: \n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    display();
    printf("\n");
    
    dequeue();
    display();
    printf("\n");
    
    return 0;
}