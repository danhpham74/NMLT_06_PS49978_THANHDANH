#include <stdio.h>
#include <math.h>
int main()
{
    int chon,min,max,x;
    float diem;
    double a,b,c,kwh;
    do
    {
        printf("+--------------------------------------------------------+\n");
        printf("|---------------MENU CHUONG TRINH LAB 4------------------|\n");
        printf("+........................................................+\n");
        printf("|1.Chuc nang tinh trung binh tong cac so chia het cho 2  |\n");
        printf("|2.Chuc nang kiem tra so nguyen to                       |\n");
        printf("|3.Chuc nang kiem tra so chinh phuong                    |\n");
        printf("|4.Thoat chuong trinh                                    |\n");
        printf("+--------------------------------------------------------+\n");
        printf("Ban hay chon chuc nang 1-4:");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1: tinh trung binh tong cac so chia het cho 2 \n");
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max );
            if(min > max){
                printf("Khong hop le vi min%d khong duoc lon hon max%d\n",min,max);
                return 0;
            }
            long tong = 0;
            int i,bienDem = 0;
            for(i = min; i <= max ; i++){
                if(i % 2 == 0){
                    tong += i;
                    bienDem++;
                }
            }
            printf("Ket qua la:\n");
            if(bienDem == 0){
                printf("Khong co so nao chia het cho 2 trong khoang [%d,%d].\n",min,max);
                printf("Khong the tinh trung binh cong vi bien dem = 0\n");
            }else{
                float trungbinh = (float)tong / bienDem;
                printf("So luong cac so chia het cho 2 la : %d\n",bienDem);
                printf("Tong ca so chia het cho 2 la : %ld\n",tong);
                printf("Trung binh cong la : %.2f\n",trungbinh);
            }
            break;
        case 2:
            printf("Ban da chon chuc nang 2:Kiem tra so nguyen to\n");
            printf("Nhap so nguyen: ");
            scanf("%d", &x);
            if(x < 2){
                printf("%d khong phai la so nguyen to\n",x);
            }else{
                int lasonguyento = 1;
                for(int i = 2;i <=sqrt(x); i++){
                    if(x%i == 0){
                        lasonguyento=0;
                        break;
                    }
                }
                if(lasonguyento == 1){
                    printf("%d la so nguyen to\n",x);
                }else{
                    printf("&d khong phai la so nguyen to\n",x);
                }
    
            }
            break;
        case 3:
            printf("Ban da chon chuc nang 3: kiem tra so chinh phuong\n");
            printf("Nhap x: ");
            scanf("%d", &x);
            int laChinhPhuong = 0;
            for(i=1;i<=x;i++){
                if(i*i==x){
                    laChinhPhuong =1;
                    break;
                }
            }
            if(laChinhPhuong ==1){
                printf("%d la so chinh phuong\n",x);
            }else{
                printf("%d khong phai la so chinh phuong\n",x);
            }
    break;
        case 4:
            printf("Ban da chon chuc nang 4: Thoat chuong trinh\n");
            break;
        default:
            printf("Ban phai chuc nang 1-4\n");
            break;
        }
    } while (chon != 4); 

    return 0;
}