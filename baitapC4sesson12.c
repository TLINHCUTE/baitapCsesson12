#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max; 
}

int main() {
    int arr[] = {1, 5, 3, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max = findMax(arr, n);
    printf("so lon nhat trong mang: %d\n", max);
    return 0;
}
