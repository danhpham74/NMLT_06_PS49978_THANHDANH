#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Hai so bang nhau\n");
    } else {
        // Sử dụng toán tử điều kiện (hoặc if-else thường) để tìm max
        int max = (a > b) ? a : b;
        printf("So lon nhat la: %d\n", max);
    }

    return 0;
}