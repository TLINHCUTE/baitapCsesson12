#include<stdio.h>

long long giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    long long ketqua = 1;
    for(int i = 2; i <= n; i++) {
        ketqua *= i;
    }
    return ketqua;
}
int main() {
    int n;
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("giai thua khong xac dinh cho so am!\n");
    } else {
        long long ketqua = giaithua(n);
        printf("giai thua %d la %lld\n", n, ketqua);
    }
    return 0;
}