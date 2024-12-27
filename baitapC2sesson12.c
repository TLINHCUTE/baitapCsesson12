#include<stdio.h>

    void inmang(int arr[], int n) {
        printf("cac phan tu trong mang la: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    int main() {
        int n;
        printf("nhap so phan tu cua mang: ");
        scanf("%d", &n);
        int arr[n];
        printf("nhap cac phan tu cua mang:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        inmang(arr, n); 
        return 0;
        
        
    }