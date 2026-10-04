#include<stdio.h>

void display(int n, int arr[]) {
    for (int i = 0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
}

int linearSearch(int n, int arr[], int k) {
    for (int i = 0; i<n; i++) {
        if (arr[i] == k){
            return i;
        }
    }
    return 0;
}

int BinarySearh(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return BinarySearh(arr, mid + 1, high, target);
    else
        return BinarySearh(arr, low, mid - 1, target);
}

int main() {
    int n = 6;
    int arr[6] = {4,5,2,6,8,9};

    printf("LINEAR SEACH: \n");
    printf("Array: ");
    display(n, arr);
    int k;
    printf("\nEnter element to find: ");
    scanf("%d",&k);
    printf("%d found at index %d\n",k, linearSearch(n, arr, k));

    printf("\n\nBINARY SEARCH: \n");
    n = 7;
    int arr2[7] = {5,6,9,7,11,5,7};
    printf("\nArray: ");
    display(n, arr2);
    int k2;
    printf("\nEnter element to find: ");
    scanf("%d",&k2);
    printf("%d found at index %d\n",k2,BinarySearh(arr,0, n-1,k2));
}