#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

struct giaDien
{
    int mucTieuThu;
    float gia;
};
struct SinhVien
{
    char hoTen[50];
    float diem;
};
struct phanSo
{
    int tu;
    int mau;
};

void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
void chucNang7();
void chucNang8();
void chucNang9();
void chucNang10();

bool kiemTraSoNguyen(float so);
bool kiemTraSNT(int so);
bool kiemTraSCP(int so);
int timUCLN(int a, int b);
int timBCNN(int a, int b);

int main()
{
    int chon;
    do
    {
        menu();
        printf("Ban hay chon chuc nang tu 0-10: ");
        if (scanf("%d", &chon) != 1)
        {
            chon = -1;
            while (getchar() != '\n')
                ;
        }

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
            chucNang5();
            break;
        case 6:
            chucNang6();
            break;
        case 7:
            chucNang7();
            break;
        case 8:
            chucNang8();
            break;
        case 9:
            chucNang9();
            break;
        case 10:
            chucNang10();
            break;
        case 0:
            printf("Ban da thoat chuong trinh\n");
            break;
        default:
            printf("Ban phai chon chuc nang tu 0 - 10\n");
            break;
        }
    } while (chon != 0);

    return 0;
}

void menu()
{
    printf("%-60s%s\n", "|+---------------------------------------------------------+", "|");
    printf("%-60s%s\n", "|                         MENU ASSIGNMENT", "|");
    printf("%-60s%s\n", "+----------------------------------------------------------", "+");
    printf("%-60s%s\n", "| 1. Kiem tra so nguyen", "|");
    printf("%-60s%s\n", "| 2. Tim UCLN va BCNN cua hai so", "|");
    printf("%-60s%s\n", "| 3. Tinh tien quan Karaoke", "|");
    printf("%-60s%s\n", "| 4. Tinh tien dien", "|");
    printf("%-60s%s\n", "| 5. Doi tien", "|");
    printf("%-60s%s\n", "| 6. Tinh lai suat vay ngan hang", "|");
    printf("%-60s%s\n", "| 7. Chuong trinh vay tien mua xe", "|");
    printf("%-60s%s\n", "| 8. Sap xep thong tin sinh vien", "|");
    printf("%-60s%s\n", "| 9. Game FPOLY-LOTT0", "|");
    printf("%-60s%s\n", "| 10. Chuong trinh tinh toan phan so         ", "|");
    printf("%-60s%s\n", "| 0. Thoat chuong trinh            ", "|");
    printf("%-60s%s\n", "+---------------------------------------------------------", "+");
}

    void chucNang1()
    {
        float so;
        printf("Nhap so bat ki: ");
        scanf("%f", &so);
        if (kiemTraSoNguyen(so))
        {
            printf("So %.2f la so nguyen\n", so);
            if (kiemTraSNT((int)so))
            {
                printf("So %d la so nguyen to\n", (int)so);
            }
            else
            {
                printf("So %d khong phai la so nguyen to\n", (int)so);
            }
            if (kiemTraSCP((int)so))
            {
                printf("So %d la so chinh phuong\n", (int)so);
            }
            else
            {
                printf("So %d khong phai la so chinh phuong\n", (int)so);
            }
        }
        else
        {
            printf("So %.2f khong phai la so nguyen\n", so);
        }
    }

    bool kiemTraSoNguyen(float so)
    {
        if ((int)so == so)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool kiemTraSNT(int so)
    {
        if (so < 2)
            return false;
        for (int i = 2; i <= sqrt(so); i++)
        {
            if (so % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool kiemTraSCP(int so)
    {
        if (so < 0)
            return false;
        int can = sqrt(so);
        if (can * can == so)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int timUCLN(int a, int b)
    {
        while (b != 0)
        {
            int du = a % b;
            a = b;
            b = du;
        }
        return a;
    }

    int timBCNN(int a, int b)
    {
        if (a == 0 || b == 0)
            return 0;
        return (abs(a * b)) / timUCLN(a, b);
    }

    void chucNang2()
    {
        int a, b;
        printf("Nhap a, b: ");
        scanf("%d%d", &a, &b);
        int ucln = timUCLN(a, b);
        int bcnn = timBCNN(a, b);
        printf("Uoc chung lon nhat cua %d va %d la %d \n", a, b, ucln);
        printf("Boi chung nho nhat cua %d va %d la %d \n", a, b, bcnn);
    }

    void chucNang3()
    {
        int gioVao, gioRa;
        float tongTien;
        int soGio;
        do
        {
            printf("Nhap gio vao va gio ra (12-23): ");
            scanf("%d%d", &gioVao, &gioRa);
        } while ((gioVao > gioRa) || (gioVao < 12) || (gioRa > 23));

        soGio = gioRa - gioVao;
        if (soGio <= 3)
        {
            tongTien = soGio * 150000;
        }
        else
        {
            tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
        }
        if (gioVao >= 14 && gioVao <= 17)
        {
            tongTien *= 0.9;
        }
        printf("Tong tien karaoke tu %d den %d la : %.0f VND\n", gioVao, gioRa, tongTien);
    }

    void chucNang4()
    {
        struct giaDien bangGiaDien[6] = {
            {50, 1678},
            {100, 1734},
            {200, 2014},
            {300, 2536},
            {400, 2834},
            {401, 2927},
        };
        int soKW;
        float tongtien = 0;

        printf("Nhap so KW tieu thu: ");
        scanf("%d", &soKW);
        if (soKW <= 50)
        {
            tongtien = soKW * bangGiaDien[0].gia;
        }
        else if (soKW <= 100)
        {
            tongtien = 50 * bangGiaDien[0].gia + (soKW - 50) * bangGiaDien[1].gia;
        }
        else if (soKW <= 200)
        {
            tongtien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + (soKW - 100) * bangGiaDien[2].gia;
        }
        else if (soKW <= 300)
        {
            tongtien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + (soKW - 200) * bangGiaDien[3].gia;
        }
        else if (soKW <= 400)
        {
            tongtien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + (soKW - 300) * bangGiaDien[4].gia;
        }
        else
        {
            tongtien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + 100 * bangGiaDien[4].gia + (soKW - 400) * bangGiaDien[5].gia;
        }
        printf("Tong tien tieu thu cua %d KW la : %.0f VND\n", soKW, tongtien);
    }

    void chucNang5()
    {
        struct loaitiente
        {
            int soluongto;
            int menhGia;
        };
        struct loaitiente dstiente[] = {
            {0, 1000},
            {0, 2000},
            {0, 5000},
            {0, 10000},
            {0, 20000},
            {0, 50000},
            {0, 100000},
            {0, 200000},
            {0, 500000}};

        int sopt = 9;
        int sotien;
        printf("Nhap so tien: ");
        scanf("%d", &sotien);

        int temp = sotien;
        for (int i = sopt - 1; i >= 0; i--)
        {
            dstiente[i].soluongto = temp / dstiente[i].menhGia;
            temp = temp % dstiente[i].menhGia;
        }

        for (int i = sopt - 1; i >= 0; i--)
        {
            if (dstiente[i].soluongto > 0)
            {
                printf("Menh gia: %6d | So to: %d\n", dstiente[i].menhGia, dstiente[i].soluongto);
            }
        }
    }

    void chucNang6()
    {
        int tienvay = 12000000, kyhan = 12;
        float laithang = 0.05;
        int gocphaitra = tienvay / kyhan;

        printf("%-8s %-12s %-15s %-15s %-15s\n", "Thang", "Tien lai", "Goc phai tra", "Tien phai tra", "Con lai");
        for (int i = 1; i <= kyhan; i++)
        {
            int tienlai = tienvay * laithang;
            tienvay = tienvay - gocphaitra;
            printf("%-8d %-12d %-15d %-15d %-15d\n", i, tienlai, gocphaitra, tienlai + gocphaitra, tienvay);
        }
    }

    void chucNang7()
    {
        double giaXe;
        printf("Nhap gia tri xe (VND): ");
        scanf("%lf", &giaXe);

        double phanTramVay = 0.8;
        double tienVay = giaXe * phanTramVay;
        double tienTraTruoc = giaXe * (1.0 - phanTramVay);
        int nam = 2;
        int thang = nam * 12;
        double laiSuatNam = 0.072;
        double laiSuatThang = laiSuatNam / 12;

        double gocHangThang = tienVay / thang;
        double laiThangDau = tienVay * laiSuatThang;
        double tienTraLanDau = tienTraTruoc + gocHangThang + laiThangDau;

        printf("\n--- THONG TIN VAY MUA XE ---\n");
        printf("Gia tri xe: %.0lf VND\n", giaXe);
        printf("So tien tra truoc (20%%): %.0lf VND\n", tienTraTruoc);
        printf("So tien vay (80%%): %.0lf VND\n", tienVay);
        printf("Thoi han vay: %d nam (%d thang)\n", nam, thang);
        printf("Tien goc tra hang thang: %.0lf VND\n", gocHangThang);
        printf("Tien lai thang dau tien: %.0lf VND\n", laiThangDau);
        printf("Tong so tien phai tra lan dau: %.0lf VND\n", tienTraLanDau);
    }

    void chucNang8()
    {
        int n;
        printf("Nhap so luong sinh vien: ");
        scanf("%d", &n);

        struct SinhVien sv[100];
        for (int i = 0; i < n; i++)
        {
            printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
            printf("Ho va ten: ");
            while (getchar() != '\n')
                ; // Làm sạch bộ nhớ đệm an toàn
            fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin);
            sv[i].hoTen[strcspn(sv[i].hoTen, "\n")] = 0;

            printf("Diem: ");
            scanf("%f", &sv[i].diem);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (sv[i].diem < sv[j].diem)
                {
                    struct SinhVien temp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = temp;
                }
            }
        }

        printf("\n%-25s %-10s %-15s\n", "Ho va Ten", "Diem", "Hoc Luc");
        printf("--------------------------------------------------\n");
        for (int i = 0; i < n; i++)
        {
            char hocLuc[20];
            if (sv[i].diem >= 9)
                strcpy(hocLuc, "Xuat sac");
            else if (sv[i].diem >= 8)
                strcpy(hocLuc, "Gioi");
            else if (sv[i].diem >= 6.5)
                strcpy(hocLuc, "Kha");
            else if (sv[i].diem >= 5)
                strcpy(hocLuc, "Trung binh");
            else
                strcpy(hocLuc, "Yeu");

            printf("%-25s %-10.2f %-15s\n", sv[i].hoTen, sv[i].diem, hocLuc);
        }
    }

    void chucNang9()
    {
        srand(time(NULL));
        int r1 = rand() % 15 + 1, r2;
        do
        {
            r2 = rand() % 15 + 1;
        } while (r1 == r2);

        int a, b;
        printf("Nhap hai so (1-15): ");
        scanf("%d%d", &a, &b);
        int dem = 0;
        if ((a == r1) || (a == r2))
            dem++;
        if ((b == r1) || (b == r2))
            dem++;

        switch (dem)
        {
        case 0:
            printf("Chuc ban may man lan sau\n");
            break;
        case 1:
            printf("Chuc mung ban da trung giai nhi\n");
            break;
        case 2:
            printf("Chuc mung ban da trung giai nhat\n");
            break;
        default:
            break;
        }
    }

    void chucNang10()
    {
        struct phanSo ps1, ps2, psTong, psHieu, psTich, psThuong;
        printf("Nhap phan so 1 (tu mau): ");
        scanf("%d%d", &ps1.tu, &ps1.mau);
        printf("Nhap phan so 2 (tu mau): ");
        scanf("%d%d", &ps2.tu, &ps2.mau);

        if (ps1.mau == 0 || ps2.mau == 0)
        {
            printf("Mau so khong the bang 0!\n");
            return;
        }

        psTong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
        psTong.mau = ps1.mau * ps2.mau;

        psHieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
        psHieu.mau = ps1.mau * ps2.mau;

        psTich.tu = ps1.tu * ps2.tu;
        psTich.mau = ps1.mau * ps2.mau;

        psThuong.tu = ps1.tu * ps2.mau;
        psThuong.mau = ps1.mau * ps2.tu;

        printf("Tong: %d/%d + %d/%d = %d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psTong.tu, psTong.mau);
        printf("Hieu: %d/%d - %d/%d = %d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psHieu.tu, psHieu.mau);
        printf("Tich: %d/%d * %d/%d = %d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psTich.tu, psTich.mau);
        if (psThuong.mau != 0)
        {
            printf("Thuong: %d/%d / %d/%d = %d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psThuong.tu, psThuong.mau);
        }
        else
        {
            printf("Khong the chia cho phan so co tu so bang 0!\n");
        }
    }