#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false;
    }

    int tongUoc = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }

    return tongUoc == n;
}
int main() {
    int num1, num2;

    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &num2);

    if (kiemTraSoHoanHao(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }

    if (kiemTraSoHoanHao(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }

    return 0;
}
