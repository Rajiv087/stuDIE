#include<stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}

void merge(int arr[], int n, int low, int mid, int high) {
    int temp[n];
    int left = low;
    int right = mid+1;
    int i = 0;
    while (left<=mid && right <= high) {
            if (arr[left] <= arr[right]){
                temp[i++] = arr[left];
                left++;
            }
            else {
                temp[i++] = arr[right];
                right++;
            }
        }
    while (left<=mid) {
        temp[i++] = arr[left];
        left++;
    }
    while (right<=high) {
        temp[i++] = arr[right];
        right++;
    }

    for (int i = low ; i<=high; i++) {
        arr[i] = temp[i - low];
    }

}

void mergeSort(int arr[],int n, int low, int high) {
    if (low >= high) return;
    int mid = (low + high)/2;
    mergeSort(arr, n, low, mid);
    mergeSort(arr, n, mid + 1, high);
    merge(arr,n, low, mid, high);
} 

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int n = 6;
    int arr[6] = {4,6,1,9,4,8};

    printf("Array before sorting: ");
    display(arr, n);
    mergeSort(arr, n, 0, n-1);
    printf("\nMerge Sort: ");
    display(arr, n);

    n = 8;
    int arr2[] = {23, 12, 1, 8, 34, 54, 2, 3};
    printf("\n\nArray before sorting: ");
    display(arr2, 8);
    shellSort(arr2, 8);
    printf("\nShell Sort: ");
    display(arr2, 8);


    return 0;
}