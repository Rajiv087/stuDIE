#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int QUEUE[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    int value;
    if (rear == MAX-1) {
        printf("Queue overflow\n");
        return;
    }
    else {
        printf("Enter value: ");
        scanf("%d",&value);

        if (front == -1) {
            front = 0;
        }
        rear++;
        QUEUE[rear] = value;
    }

}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return;
    }
    printf("Deleted Element is: %d\n",QUEUE[front]);
    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

void display() {
    if (front == -1) {
        printf("Queue empty\n");
        return;
    }
        printf("Queue elements are: \n");
        for (int i = front; i<=rear; i++) {
            printf("%d\n",QUEUE[i]);
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
    return 0;
}