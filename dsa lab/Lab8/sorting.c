#include<stdio.h>

void selectionSort(int n, int arr[]) {
    for (int i = 0; i<n-1; i++){
        int min = i;
        for (int j = i; j<n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubbleSort(int n, int arr[]) {
    for (int i = n-1; i>0; i--) {
        for(int j = 0; j<i; j++) {
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
}

void insertionSort(int n, int arr[]) {
    for (int i = 0; i<n; i++) {
        int j = i;
        while (j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int Partition(int n, int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j) {
        while (arr[i]<=pivot && i<=high-1) i++;
        while(arr[j]>pivot && j>low) j--;
        
        if (i<j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int n, int arr[], int low, int high) {
    if (low < high) {
        int PI = Partition(n, arr, low, high);
        quickSort(n, arr, low, PI-1);
        quickSort(n, arr, PI+1, high);
    }
}

void display(int n, int arr[]) {
    for (int i = 0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
}

int main() {
    int n = 5;
    int arr[5] = {5,6,8,4,15};
    printf("Array before sorting: \t");
    display(n, arr);
    printf("\nSelection Sort: \t");
    selectionSort(n, arr);
    display(n, arr);

    n = 6;
    int arr2[6] = {5,6,2,4,8,2};
    printf("\n\nArray before sorting: \t");
    display(n, arr2);
    printf("\nBubble Sort: \t\t");
    bubbleSort(n, arr2);
    display(n, arr2);

    n= 8;
    int arr3[8] = {5,3,8,2,9,7,5,6};
    printf("\n\nArray before sorting: \t");
    display(n, arr3);
    printf("\nInsertion Sort: \t");
    insertionSort(n, arr3);
    display(n, arr3);

    n = 7;
    int arr4[7] = {5,2,6,8,9,2,77};
    printf("\n\nArray before sorting: \t");
    display(n, arr4);
    printf("\nQuick Sort: \t\t");
    quickSort(n, arr4, 0, n-1);
    display(n, arr4);

}