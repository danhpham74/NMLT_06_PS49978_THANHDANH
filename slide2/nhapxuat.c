#include <stdio.h>
int main(){
    int namSinh;
    printf("nhap nam sinh cua ban de tinh tuoi:");
    scanf("%d",&namSinh);
    int tuoi = 2026 - namSinh;
    printf("Ban lot long nam %d, ban da %d mua xuan .\n",namSinh, tuoi);

    if (tuoi < 18){
        printf("Ban chua du tuoi vi thanh nien.\n");
    }else{
        printf("Ban da du tuoi vi thanh nien.\n");
    }
    
}