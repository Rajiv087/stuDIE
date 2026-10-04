// Lab - 1 (23/07/2026)

#include<stdio.h>
int main() {
    int size;
    printf("Enter Size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int n, value, p;
    printf("n: ");
    scanf("%d", &n);
    printf("p: ");
    scanf("%d", &p);
    printf("value: ");
    scanf("%d", &value);

    for (int i = n; i>=p; i--) {
        arr[i] = arr[i-1];
    }
    arr[p] = value;
    n++;

    for(int i = 0; i<n; i++) {
        printf("%d\t", arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i<n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("\nMaximum: %d\nMinimum: %d",max, min);
    printf("\n");

    int freq[max + 1];
    for(int i = 0; i<size; i++) {
        freq[arr[i]]++;
    }
    
    for(int i = 0; i<n; i++) {
        if (freq[i] > 0) 
        printf("%d -> %d\n", i, freq[i]);
    }

    return 0;
}