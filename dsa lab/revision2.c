#include<stdio.h>

void insert_beginning(int arr[], int *n, int value){
    for (int i = *n -1; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = value;
    (*n)++;
}

void insert_end(int arr[], int *n, int value){ 
    arr[*n] = value;
    (*n)++;
}

void insert_specific(int arr[], int *n, int value, int pos) {
    for (int i = *n-1; i>=pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    (*n)++;
}

void delete_beginning(int arr[], int *n) {
    for (int i = 0; i<*n -1 ; i++) {
        arr[i] = arr[i+1];
    }
    (*n)--;
}

void delete_end(int arr[], int *n) {
    (*n)--;
}

void delete_specific(int arr[], int *n, int pos) {
    for (int i = pos; i<* n-1; i++) {
        arr[i] = arr[i+1];
    }
    (*n)--;
}

int main() {
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    int value = 60;
    int pos = 2;
    insert_beginning(arr, &n, value);
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    insert_end(arr, &n, value);
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }

    printf("\n\n");
    insert_specific(arr, &n, value, pos);
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    
    delete_beginning(arr, &n);
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    delete_end(arr, &n);
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    delete_specific(arr, &n, pos);
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
}