#include <stdio.h>
#include <string.h>
#include <ctype.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main()
{
    int chon;
    do
    {
        menu();
        printf("Ban hay chon chuc nang tu (1-5): ");
        scanf("%d", &chon);
        getchar();
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            printf("Ban da thoat chuong trinh");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 5\n");
            break;
        }
    } while (chon != 5);

    return 0;
}

void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             HE THONG QUAN LY SINH VIEN            |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Nhap va xuat danh sach sinh vien               |\n");
    printf("| 2. Sap xep sinh vien theo diem TB tang dan        |\n");
    printf("| 3. Tim kiem sinh vien theo ma so sinh vien        |\n");
    printf("| 4. Xuat danh sach sinh vien dat hoc bong(>=8.0)   |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1()
{
    
}

void chucNang2()
{

    
}

void chucNang3()
{
    
}

void chucNang4()
{
    
}
