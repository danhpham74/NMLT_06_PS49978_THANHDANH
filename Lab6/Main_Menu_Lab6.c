#include <stdio.h>

void menu()
{
    printf("+-------------------------------------------------------------+\n");
    printf("|              MENU CHUONG TRINH LAB 6                        |\n");
    printf("+.............................................................+\n");
    printf("|1.Chuc nang tinh trung binh tong cac so chia het cho 3 va 5  |\n");
    printf("|2.Chuc nang tim gia tri lon nhat va nho nhat trong mang      |\n");
    printf("|3.Chuc nang sap xep mang theo thu tu giam dan                |\n");
    printf("|4.Chuc nang ma tran binh phuong(mang 2 chieu)                |\n");
    printf("|5.Chuc nang loc va xuat cac so le trong ma tran              |\n");
    printf("|6.Thoat chuong trinh                                         |\n");
    printf("+-------------------------------------------------------------+\n");
    printf("Ban hay chon chuc nang 1-6: ");
}
void tinhTrungBinhCong(int a[], int n)
{
    int tong = 0;
    int soDem = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            tong += a[i];
            soDem++;
        }
    }

    if (soDem == 0)
    {
        printf("\n=> Khong co so chia het cho 3 va 5\n\n");
    }
    else
    {
        printf("\n=> Trung binh tong cac so chia het cho 3 va 5 la : %.2f\n\n", (float)tong / soDem);
    }
}
int main()
{
    int chon;

    do
    {
        menu();
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        
            int n;
            int a[100];

            printf("Nhap n: ");
            scanf("%d", &n);

            for (int i = 0; i < n; i++)
            {
                printf("Nhap A[%d] = ", i);
                scanf("%d", &a[i]);
                tinhTrungBinhCong(a, n);
                break;
            }
        case 2:
            printf("\nChuc nang 2\n\n");
            break;
        case 3:
            printf("\nChuc nang 3\n\n");
            break;
        case 4:
            printf("\nChuc nang 4\n\n");
            break;
        case 5:
            printf("\nChuc nang 5\n\n");
            break;
        case 6:
            printf("\nBan da chon thoat chuong trinh!\n");
            break;
        default:
            printf("\nVui long chon tu 1-6!\n\n");
            break;
        }
        }
        while (chon != 6)
            ;

        return 0;
    }
