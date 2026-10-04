//Insertion at the beginning of a doubly linked list 
//Insertion at the end
//Insertion at a specific position
//Deletion at the beginning
//Deletion at the end
//Deletion at a specific position
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev; 
    struct node* next;
};
struct node* start = NULL;

void insert_beginning() {
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    printf("Enter new element: ");
    scanf("%d", &p->data);

    if(start == NULL) {
        p->prev = NULL;
        p->next = NULL;
        start = p;
    }
    else{
        p->prev = NULL;
        p->next = start;
        start->prev = p;
        start = p;

    }
}

void insert_end() {
    struct node* p, *temp = start;
    p = (struct node*)malloc(sizeof(struct node));
    printf("Enter an element: ");
    scanf("%d",&p->data);

    if (start == NULL) {
        p->prev = NULL;
        p->next = NULL;
        start = p;
    }
    else {
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p;
        p->prev = temp;
        p->next = NULL;
    }
}

void insert_specific() {
    struct node* p, *temp = start, *t=NULL;
    int pos, i;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position of new element: ");
    scanf("%d",&pos);
    
    for(i = 1; i<pos; i++) {
        if(temp == NULL) {
            printf("Position does not exist.");
            free(p);
            return;
        }
        else {
            t = temp;
            temp = temp->next;
        }
    }
    if(temp!=NULL) {
        printf("Enter an element: ");
        scanf("%d",&p->data);
        t->next = p;
        p->prev = t;
        p->next = temp;
        temp->prev = p;
    }
}

void delete_beginning() {
    struct node* temp = start;
    if(start == NULL) {
        printf("List is empty");
        return;
    }
    else {
        start = start->next;
        if(start!= NULL) {
            start->prev = NULL;
        }
        printf("Deleted element is %d\n", temp->data);
        free(temp);
    }
}

void delete_end() {
    struct node *temp = start, *t=NULL;
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    else {
        while(temp->next != NULL) {
            t = temp;
            temp=temp->next;
        }
        t->next = NULL;
        temp->prev = NULL;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}

void delete_specific() {
    struct node* temp = start, *t, int pos, i;
    printf("Enter the position of the element: ");
    scanf("%d", %pos);
    for (i = 1; i<pos; i++) {
        if(temp == NULL) {
            printf("Position does not exist");
            free(p);
            return;
        }
        else {
            t = temp;
            temp = temp->next;
        }
    }
    }
}

void print_list() {
    struct node* temp = start;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}


int main(){
    insert_beginning();
    insert_beginning();
    insert_beginning();
    print_list();
    
    insert_end();
    print_list();
    
    insert_specific();
    print_list();

    delete_beginning();
    print_list();

    delete_end();
    print_list();
    return 0;
}
