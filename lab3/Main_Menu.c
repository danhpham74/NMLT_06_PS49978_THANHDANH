#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    float diem;
    double a,b,c,x,kwh;
    do
    {
        printf("+--------------------------------------------------+\n");
        printf("|---------------MENU CHUONG TRINH LAB 3------------|\n");
        printf("...................................................\n");
        printf("|1.Chuc nang tinh hoc luc sinh vien                |\n");
        printf("|2.Chuc nang gia phuong trinh bac hai              |\n");
        printf("|3.Chuc nang tinh tien dien tieu thu hang thang    |\n");
        printf("|4.Thoat chuong trinh                              |\n");
        printf("---------------------------------------------------\n");
        printf("Ban hay chon chuc nang 1-4:");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1: Chuc nang tinh hoc luc sinh vien \n");
            printf("Nhap so diem cua sinh vien: ");
            scanf("%f", &diem);
            if(diem < 0.0 || diem > 10.0){
                printf("Diem so khong hop le\n");
            }
                else{
                    if (diem >= 9.0) {
            printf("Hoc luc Xuat sac\n");
        } else {
            if (diem >= 8.0) {
                printf("Hoc luc Gioi\n");
            } else {
                if (diem >= 6.5) {
                    printf("Hoc luc Kha\n");
                } else {
                    if (diem >= 5.0) {
                        printf("Hoc luc Trung binh\n");
                    } else {
                        if (diem >= 3.5) {
                            printf("Hoc luc Yeu\n");
                        } else {
                            printf("Hoc luc Kem\n");
                        }
                    }
                }
            }
        }
    }
            break;
        case 2:
            printf("Ban da chon chuc nang 2:giai phuong trinh bac hai\n");
            printf("Nhap he so a,b,c: ");
            scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            double x = -c / b;
            printf("Phuong trinh co nghiem duy nhat la x = %.2lf\n", x);
        }
    } else {
        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else { 
            if (delta == 0) {
                double x = -b / (2 * a);
                printf("Phuong trinh co nghiem kep la x = %.2lf\n", x);
            } else { 
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Phuong trinh co 2 nghiem rieng biet:\n");
                printf("x1 = %.2lf\n", x1);
                printf("x2 = %.2lf\n", x2);
            }
        }
    }
            break;
        case 3:
            printf("Ban da chon chuc nang 3: Chuc nang tinh tien dien tieu thu hang thang\n");
            printf("Nhap vao tong so kWh da tieu thu trong thang: ");
            scanf("%lf", &kwh);

            if (kwh <= 0) {
            printf("So kWh khong hop le, vui long nhap so lon hon 0 (so duong)!\n");
    } else {
        double tongTien = 0;

        if (kwh <= 50) {
            tongTien = kwh * 1678;
        } else {
            if (kwh <= 100) {
                tongTien = (50 * 1678) + (kwh - 50) * 1734;
            } else {
                if (kwh <= 200) {
                    tongTien = (50 * 1678) + (50 * 1734) + (kwh - 100) * 2014;
                } else {
                    if (kwh <= 300) {
                        tongTien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (kwh - 200) * 2536;
                    } else {
                        if (kwh <= 400) {
                            tongTien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (kwh - 300) * 2834;
                        } else {
                            tongTien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + (kwh - 400) * 2927;
                        }
                    }
                }
            }
        }

        printf("Tong tien dien phai tra: %.0lf VND\n", tongTien);
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