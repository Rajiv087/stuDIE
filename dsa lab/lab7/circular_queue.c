#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int queue[SIZE];
int front = -1;
int rear = -1;
int count = 0;

void enqueue(int value) {
    if (count == SIZE) {
        printf("Queue overflow\n", value);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    count++;
}
void dequeue() {
    if (count == 0) {
        printf("Queue underflow\n");
        return;
    }
    int value = queue[front];
    front = (front + 1) % SIZE;
    count--;
    if (count == 0) {
        front = -1;
        rear = -1;
    }
}
void display() {
    if (count == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    for (int c = 0; c < count; c++) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("\n");
}


struct Node {
    int data;
    struct Node *next;
};struct Node *last = NULL;  

void insert(int value) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = value;

    if (last == NULL) {
        node->next = node;   
        last = node;
    } else {
        node->next = last->next;
        last->next = node;
        last = node;
    }
}
void pop() {
    if (last == NULL) {
        printf("Queue underflow\n");
        return;
    }
    struct Node *head = last->next;
    int value = head->data;

    if (head == last) {
        last = NULL;
    } else {
        last->next = head->next;
    }
    free(head);
}

void displayList() {
    if (last == NULL) {
        printf("Queue empty\n");
        return;
    }
    printf("Queue: ");
    struct Node *temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

int main() {
    printf("Circular Queue using arrays:\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    printf("\nCircular Queue using linked list:\n");
    insert(30);
    insert(40);
    insert(50);
    displayList();

    pop();
    displayList();

    return 0;
}