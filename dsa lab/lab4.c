#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}
struct Node* insertatbeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(head == NULL) {
        newNode->next = newNode;
        return newNode;
    }
    struct Node *last = head;
    while(last->next != head) {
        last = last->next;
    }
    newNode->next = head;
    last->next = newNode;
    head = newNode;

    return head;
}

struct Node* insertatend(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(head == NULL) {
        newNode->next = newNode;
        return newNode;
    }
    struct Node* last = head;
    while(last->next!= head){
        last = last->next;
    }
    last->next = newNode;
    newNode->next = head;

    return head;

}

struct Node* insertatspecific(struct Node* head, int value, int pos)) {
    if (post <= 1 || head == NULL) {
        return insertatbeginning(head, value);
    }
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* temp = head;
    int count = 1;
    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    } 
    newNode->next = temp->next;
    temp->next = newNode;

    return head;

}

struct Node* deleteatbeginning(struct Node *head) {
    if (head == NULL) {
        printf("List is empty");
        return NULL;
    }
    if(head->next == head) {
        free(head);
        return NULL;
    }
    struct Node* last = head;
    while(last->next != head) {
        last = last -> next;
    }
    struct Node* temp = head;
    head = head->next;
    last->next = head;
    free(temp);

    return head;
}

struct Node* deleteatend(struct Node* head) {
    if(head == NULL) {
        printf("List is empty");
        return NULL;
    }
    if(head->next == head) {
        free(head);
        return NULL;
    }
    struct Node *secondlast = head;
    while (secondlast->next->next != head) {
        secondlast = secondlast->next;
    }
    struct Node *last = secondlast->next;
    secondlast->next = head;
    free(last);

    return head;
}

struct Node* deleteatposition(struct Node* head, int pos) {
    if (head == NULL) {
        printf("list is empty");
        return NULL;
    }
    is (pos <= 1) {
        return deleteatbeginning(head);
    }
    struct Node *temp = head;
    int count = 1;
    while(count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }
    if (temp->next == head) {
        printf("Out of range");
        return deleteatend(head);
    }

    struct Node* deletednode = temp->next;
    temp->next = deletednode->next;
    free(deletednode);

    return head;
}



int main() {
    insertatbeginning(head, 10);
    insertatbeginning(head, 20);
    insertatbeginning(head, 30);

    insertatend(head, 40);
    insertatend(head, 50);

    insertatspecific(head, 60, 2);

    deleteatbeginning(head);

    deleteatend(head);

    

    return 0;
}