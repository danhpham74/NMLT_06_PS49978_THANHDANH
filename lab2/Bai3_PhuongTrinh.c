#include <stdio.h>

int main() {
    float a, b;
    float x;
    
    printf("Nhap he so a: ");
    scanf("%f", &a);
    
    printf("Nhap he so b: ");
    scanf("%f", &b);
    
    // Tính nghiệm của phương trình ax + b = 0
    // ax + b = 0
    // ax = -b
    // x = -b/a
    x = -b / a;
    
    // Xuất ra nghiệm
    printf("Nghiem cua phuong trinh %.2f*x + %.2f = 0\n", a, b );
    printf("x= %.2lf",x);
    
    return 0;
}
