//ARRAYS

// #include<stdio.h>

// void insert_beginning(int arr[], int *n, int value) {
//     for (int i = *n-1; i>=0; i--) {
//         arr[i + 1] = arr[i];
//     }
//     arr[0] = value;
//     (*n)++;
// }

// void insert_end(int arr[], int *n, int value) {
//     arr[*n] = value;
//     (*n)++;
// }

// void insert_specific(int arr[], int *n, int pos, int value) {
//     for (int i = *n -1; i>=pos; i--) {
//         arr[i+1] = arr[i];
//     }
//     arr[pos] = value;
//     (*n)++;
// }

// void delete_beginning(int arr[], int *n) {
    // for (int i = 0; i< *n -1; i++) {
    //     arr[i] = arr[i + 1];
    // }
    // (*n)--;
// }

// void delete_end(int arr[], int *n){
//     (*n)--;
// }

// void delete_specific(int arr[], int *n, int pos) {
//     for (int i = pos; i< *n -1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     (*n)--;
// }

// int main() {
//     int arr[5] = {20,30,40,50,60};
//     int value = 70;
//     int n = 5;
//     int pos = 3;
//     // printf("Enter element to be inserted at the beginning: ");
//     // scanf("%d",&value);
//     // insert_beginning(arr, &n, value);
//     // insert_end(arr, &n, value);
//     // insert_specific(arr, &n, pos, value);
//     // delete_beginning(arr, &n);
//     // delete_end(arr, &n);
//     delete_specific(arr, &n, pos);

//     for (int i = 0; i< n; i++) {
//         printf("%d\t",arr[i]);
//     }
// }

// lINKED LISTS

// #include<stdio.h>
// #include<stdlib.h>
//     struct Node{
//         int data;
//         struct Node *next;
//     };
// int main() {

//     struct Node *head = NULL;
//     struct Node *second = NULL;
//     struct Node *third = NULL;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 10;
//     head->next = second;

//     second->data = 20;
//     second->next = third;

//     third->data = 30;
//     third->next = NULL;

//     struct Node *temp = head;
//     while(temp!=NULL) {
//         printf("%d ->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

// }

// SINLGY LINKED LIST
// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
// };struct Node *head = NULL;

// void insert_beginning(){
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter element: ");
//     scanf("%d", &newNode->data);

//     newNode->next = head;
//     head = newNode;
// }

// void insert_end() {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     struct Node *temp = head;
//     while(temp->next !=NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// void insert_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);

//     if (pos == 1) {
//         insert_beginning();
//         return;
//     }

//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     struct Node *temp = head;
//     for (int i = 1; i<pos-1 && temp!=NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Invalid Position\n");
//         free(newNode);
//         return;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;

// }

// void delete_beginning() {
//     if (head == NULL) {
//         printf("Empty list\n");
//         return;
//     }
//     struct Node *temp = head;
//     head = head->next;
//     free(temp);
// }

// void delete_end() {
//     if (head == NULL) {
//         printf("Empty List");
//         return;
//     }
//     if (head->next == NULL) {
//         free(head);
//         head = NULL;
//         return;
//     }
//     struct Node *temp = head;
//     //find the second last element
//     while (temp->next->next !=NULL) {
//         temp = temp->next;
//     }
//     free(temp->next);
//     temp->next = NULL;
// }

// void delete_specific() {
//     int pos; 
//     printf("Enter position to be deleted: ");
//     scanf("%d",&pos);
//     if (head == NULL) {
//         printf("Empty list");
//         return;
//     }
//     if (pos == 1) {
//         delete_beginning();
//         return;
//     }
//     struct Node *temp = head;
//     for (int i = 1; i<pos-1 && temp->next!= NULL; i++) { 
//         temp = temp->next;

//         if (temp->next == NULL) {
//             printf("Invalid position\n");
//             return;
//         } 
//     }
//     struct Node *toDelete = temp->next;
//     temp->next = toDelete->next;
//     free(toDelete);
// }

// void traverse() {
//     struct Node *temp = head;
//     while(temp!=NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     insert_beginning();
//     insert_beginning();
//     insert_beginning();
//     traverse();

//     insert_end();
//     insert_end();
//     traverse();

//     insert_specific();
//     traverse();

//     delete_beginning();
//     traverse();

//     delete_end();
//     traverse();

//     delete_specific();
//     traverse();
// }

// Doubly Linked list 
// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
//     struct Node *prev;
// }; struct Node* head = NULL;

// void insert_beginning(){
    
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);
//     newNode->prev = NULL;
//     newNode->next = head;

//     if(head != NULL) {
//         head->prev = newNode;
//     }
//     head = newNode;
// }

// void insert_end() {  
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);
//     newNode->next = NULL;

//     if (head == NULL) {
//         newNode->prev = NULL;
//         head = newNode;
//         return;
//     }
//     struct Node *temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
// }

// void insert_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);

//     if (pos == 1) {
//         insert_beginning();
//         return;
//     }

//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);
    
//     struct Node *temp = head;
//     for (int i = 1; i<pos - 1 && temp->next!= NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Invalid Position\n");
//         return;
//     }
//     newNode->next = temp->next;
//     newNode->prev = temp;

//     if (temp->next != NULL) {
//         temp->next->prev = newNode;
//     }
//     temp->next = newNode;

// }

// void delete_beginning() {
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     struct Node *temp = head;
//     head = head->next;

//     if (head != NULL) {
//         head->prev = NULL;
//     }
//     free(temp);
// }

// void delete_end() {
//     if (head == NULL) {
//         printf("Empty list\n");
//         return;
//     }
//     struct Node *temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     if (temp->prev !=NULL) { 
//         temp->prev->next = NULL;
//     }
//     else {
//         head = NULL;
//     }
//     free(temp);
// }

// void delete_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);

//     if (pos <= 0 || head == NULL) {
//         printf("Invalid position\n");
//         return;
//     }
    
//     if (pos == 1) {
//         delete_beginning();
//         return;
//     }

//     struct Node *temp = head;
//     for (int i = 1; i<pos - 1 && temp->next != NULL; i++){
//         temp = temp->next;
//     }

//     if (temp->next == NULL) {
//         printf("Position out of range\n");
//         return;
//     }
//     struct Node *toDelete = temp->next;
//     temp->next = toDelete->next;

//     if (toDelete->next != NULL) {
//         toDelete->next->prev = temp;
//     }
//     free(toDelete);

// }

// void traverse() {
//     if (head == NULL) {
//         printf("Empty list\n");
//         return;
//     }
//     struct Node *temp = head;
//     while (temp!=NULL) {
//         printf("%d <-> ",temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     insert_beginning();
//     insert_beginning();
//     insert_beginning();
//     traverse();

//     insert_end();
//     traverse();

//     insert_specific();
//     traverse();

//     delete_beginning();
//     traverse();

//     delete_end();
//     traverse();

//     delete_specific();
//     traverse();
// }

// Singly Circular Linked List 
// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// }; struct Node *head = NULL;

// void traverse() {
//     struct Node *temp = head;
    
//     do {
//         printf("%d -> ",temp->data);
//         temp = temp->next;
//     }
//     while(temp != head);
//     printf("Back to head\n");
// }

// void insert_beginning() {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     if (head == NULL) {
//         head = newNode;
//         newNode->next = head;
//         return;
//     }

//     struct Node *temp = head;
//     while (temp->next != head) {
//         temp = temp->next;
//     }
//     newNode->next = head;
//     temp->next = newNode;
//     head = newNode;
// }

// void insert_end() {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     if(head == NULL) {
//         head = newNode;
//         newNode->next = head;
//         return;
//     }
//     struct Node *temp = head;
//     while(temp->next != head) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->next = head;
// }

// void insert_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);

//     if (pos == 1) {
//         insert_beginning();
//         return;
//     }
//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }

//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     struct Node *temp = head;
//     for (int i = 1; i< pos - 1 && temp->next != NULL; i++) {
//         temp = temp->next ;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// void delete_beginning() {
//     if (head == NULL) {
//         printf("Empty list");
//         return;
//     }
//     if (head->next == head) {
//         free(head);
//         head = NULL;
//         return;
//     }

//     struct Node *temp = head;
//     while (temp->next != head) {
//         temp = temp->next;
//     }
    
//     struct Node *toDelete = head;
//     head = head->next;
//     temp->next = head;
//     free(toDelete);
// } 

// void delete_end() {
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     if (head->next == head) {
//         free(head);
//         head = NULL;
//         return;
//     }
//     struct Node *temp = head;
//     while (temp->next->next != head) {
//         temp = temp->next;
//     }
//     free(temp->next);
//     temp->next = head;
// }

// void delete_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);

//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     if (pos == 1) {
//         delete_beginning();
//         return;
//     }
//     struct Node* temp = head;
//     for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp->next == head) {
//         return;
//     }

//     struct Node *toDelete = temp->next;
//     temp->next = toDelete->next;
//     free(toDelete);
// }

// int main() {
//     insert_beginning();
//     insert_beginning();
//     insert_beginning();
//     traverse();

//     insert_end();
//     traverse();

//     insert_specific();
//     traverse();

//     delete_beginning();
//     traverse();

//     delete_end();
//     traverse();

//     delete_specific();
//     traverse();
// }

//DOUBLY CIRCULAR LINKED LIST 
// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
//     struct Node *prev;
// }; struct Node *head = NULL;

// void traverse() {
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     struct Node *temp = head;
//     do {
//         printf("%d <-> ",temp->data);
//         temp = temp->next;
//     } while(temp!= head);
//     printf("Back to head\n");
// }

// void insert_beginning() {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     if (head == NULL) {
//         head = newNode;
//         newNode->next = head;
//         newNode->prev = head;
//         return;
//     }
//     struct Node *last = head->prev;
//     newNode->next = head;
//     newNode->prev = last;

//     last->next = newNode;
//     head->prev = newNode;

//     head = newNode;

// }

// void insert_end() {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     if (head == NULL) {
//         head = newNode;
//         newNode->next = head;
//         newNode->prev = head;
//         return;
//     }

//     struct Node *last = head->prev;
//     newNode->next = head;
//     newNode->prev = last;
//     last->next = newNode;
//     head->prev = newNode;

// }

// void insert_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);

//     if (pos == 1) {
//         insert_beginning();
//         return;
//     }
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     struct Node *temp = head;
//     for (int i = 1; i<pos - 1 && temp->next != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp->next == head) {
//         return;
//     }
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     newNode->next = temp->next;
//     newNode->prev = temp;

//     temp->next->prev = newNode;
//     temp->next = newNode;
// }

// void delete_beginning() {
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     if (head->next == head){
//         free(head);
//         head = NULL;
//         return;
//     }
//     struct Node *last = head->prev ;
//     struct Node *temp = head;
//     head = head->next;
//     head->prev = last;
//     last->next = head;

//     free(temp);
// }

// void delete_end() {
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     if (head->next == head){ 
//         free(head);
//         head = NULL;
//         return;
//     }
//     struct Node *last = head->prev;
//     struct Node *newLast = last->prev;
//     newLast->next = head;
//     head->prev = newLast;
//     free(last);
// }

// void delete_specific() {
//     int pos;
//     printf("Enter position: ");
//     scanf("%d",&pos);
//     if (head == NULL) {
//         printf("Empty List\n");
//         return;
//     }
//     if (pos == 1) {
//         delete_beginning();
//         return;
//     }
//     struct Node *temp = head;
//     for (int i = 1; i< pos&& temp->next != NULL; i++) {
//         temp = temp->next;
//     }

//     temp->prev->next = temp->next;
//     temp->next->prev = temp->prev;
//     free(temp);

// }

// int main() {
//     insert_beginning();
//     insert_beginning();
//     insert_beginning();
//     traverse();

//     insert_end();
//     traverse();

//     insert_specific();
//     traverse();

//     delete_beginning();
//     traverse();

//     delete_end();
//     traverse();

//     delete_specific();
//     traverse();
// }

// STATIC STACK 

// #include<stdio.h>
// #include<stdlib.h>
// #define MAX 5
// int stack[MAX];
// int top = -1;

// void push() {
//     int value;
//     if (top == MAX - 1) {
//         printf("Stack Overflow\n");
//         return;
//     }
//     else {
//         printf("Enter value: ");
//         scanf("%d",&value);
//         top++;
//         stack[top] = value;
//     }
// }

// void pop() {
//     if (top == -1) {
//         printf("Stack Underflow\n");
//     }
//     else {
//         printf("Popped element is: %d\n",stack[top]);
//         top--;
//     }
// }

// void display() {
//     int i;
//     if (top == -1) {
//         printf("Stack Empty\n");
//     }
//     else {
//         printf("Stack Elements: \n");
//         for (i = top; i>=0; i--) {
//             printf("%d\n",stack[i]);
//         }
//     }
// }
// int main() {
//     push();
//     push();
//     push();
//     push();
//     push();
//     display();

//     pop();
//     display();

// }

// DYNAMIC STACK 
// #include<stdio.h>
// #include<stdlib.h>
// struct Node {
//     int data;
//     struct Node *next;
// }; struct Node *head = NULL;

// void push() {
//     int value;
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d",&newNode->data);

//     newNode->next = head;
//     head = newNode;
// }

// void pop() {
//     struct Node *temp = head;
//     if (head == NULL) {
//         printf("Stack Underflow\n");
//         return;
//     }
//     printf("Popped element is: %d\n",head->data);
//     head = head->next;
//     free(temp);
// }

// void display() {
//     struct Node *temp = head;
//     if (head == NULL) {
//         printf("Empty stack\n");
//         return;
//     }
//     printf("Stack elements: \n");
//     while (temp != NULL) {
//         printf("%d\n",temp->data);
//         temp = temp->next;
//     }
// }
// int main() {
//     push();
//     push();
//     push();
//     display();

//     pop();
//     display();
//     pop();
//     display();
// }

//Static Queue
#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void push() {
    int value;
    if (rear == MAX-1) {
        printf("Queue Overflow\n");
        return;
    }
    else {
        printf("Enter value: ");
        scanf("%d",&value);

        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

void pop() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted Element is: %d\n",queue[front]);
    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

void display() {
    if (front == - 1){
        printf("Queue Empty\n");
        return;
    }
    printf("Queue Element: \n");
    for (int i = front; i<=rear; i++) {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main() {
    push();
    push();
    push();
    display();

    pop();
    display();
}