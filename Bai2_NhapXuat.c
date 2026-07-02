#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a > b) {
        printf("So lon nhat la: %d\n", a);
    } else if (a < b) {
        printf("So lon nhat la: %d\n", b);
    } else {
        printf("Hai so bang nhau\n");
    }
    return 0;
}