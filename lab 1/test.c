#include <stdio.h>

int main() {
    int a = 3;
    int b = 5;
    float x;
    
    x = (float)-b / a;
    
    printf("Phuong trinh %dx + %d = 0 co nghiem x = %.2f\n", a, b, x);
    
    return 0;
}