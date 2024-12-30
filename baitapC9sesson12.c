#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void inputMatrix(int arr[][100], int n, int m) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[][100], int n, int m) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


void printCorners(int arr[][100], int n, int m) {
    printf("Cac phan tu o goc ma tran:\n");
    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("arr[0][%d] = %d\n", m - 1, arr[0][m - 1]);
    printf("arr[%d][0] = %d\n", n - 1, arr[n - 1][0]);
    printf("arr[%d][%d] = %d\n", n - 1, m - 1, arr[n - 1][m - 1]);
}

void printBorder(int arr[][100], int n, int m) {
    printf("Cac phan tu o duong bien ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

void printDiagonals(int arr[][100], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

void printPrimes(int arr[][100], int n, int m) {
    printf("Cac phan tu la so nguyen to trong ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m;
    int arr[100][100];
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    
    int choice;
    do {
        printf("\n---------------Menu-------------\n");
        printf("\n1.Nhap gia tri cac phan tu cua mang\n");
        printf("\n2.In gia tri cac phan tu cua mang theo ma tran\n");
        printf("\n3.In ra cac phan tu o goc theo ma tran\n");
        printf("\n4.In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("\n5.In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("\n6.In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("\n7.Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                inputMatrix(arr, n, m);
                break;
            case 2:
                printMatrix(arr, n, m);
                break;
            case 3:
                printCorners(arr, n, m);
                break;
            case 4:
                printBorder(arr, n, m);
                break;
            case 5:
                printDiagonals(arr, n, m);
                break;
            case 6:
                printPrimes(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }while (choice != 7);
    
    return 0;
}
    
