#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
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
struct phanSo nhapPS();

int main()
{
    int chon;
    do
    {
        menu();
        printf("Ban hay chon chuc nang tu (1-6): ");
        scanf("%d", &chon);
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
            printf("Ban da thoat chuong trinh");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 10\n");
            break;
        }
    } while (chon != 0);

    return 0;
}

void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|-----------MENU CHUONG TRINH ASSIGNMENT------------|\n");
    printf("+...................................................+\n");
    printf("|1.Chuc nang kiem tra so nguyen,so NT,so CP         |\n");
    printf("|2.Chuc nang tim uoc so chung va boi chung cua 2 so |\n");
    printf("|3.Chuc nang tinh tien cho quan karaoke             |\n");
    printf("|4.Chuc nang tinh tien dien                         |\n");
    printf("|5.Chuc nang doi tien                               |\n");
    printf("|6.Chuc nang tinh lai suat ngan hang vay tra gop    |\n");
    printf("|7.Chuc nang vay tien mua xe                        |\n");
    printf("|8.Chuc nang sap xep thong tin sinh vien            |\n");
    printf("|9.Chuc nang GAME FPOLY-LOTT                        |\n");
    printf("|10.Chuc nang tinh toan phan so                     |\n");
    printf("|0.Thoat chuong trinh                              |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1()
{
    float so;
    getchar();
    printf("Nhap so bat ki: ");
    scanf("%f", &so);
    if (kiemTraSoNguyen(so))
    {
        printf("So %.2f la so nguyen\n", so);
        if (kiemTraSNT((int)so))
        {
            printf("So %.2f la so nguyen to\n", so);
        }
        else
        {
            printf("So %.2f khong phai la so nguyen to\n", so);
        }
        if (kiemTraSCP((int)so))
        {
            printf("So %.2f la so chinh phuong\n", so);
        }
        else
        {
            printf("So %.2f khong phai la so chinh phuong\n", so);
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
    if (so == 2)
        return true;
    for (int i = 2; i <= so; i++)
    {
        if (so % i == 0)
        {
            return false;
        }
    }
}
bool kiemTraSCP(int so)
{
    if (kiemTraSoNguyen(sqrt(so)))
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
        int du = a & b;
        a = b;
        b = du;
    }
    return a;
}
int timBCNN(int a, int b)
{
    return (a * b) / timUCLN(a, b);
}

void chucNang2()
{
    int a, b;
    printf("Nhap a,b: ");
    scanf("%d%d", &a, &b);
    int ucln = timUCLN(a, b);
    int bcnn = timBCNN(a, b);
    printf("Uoc chung lon nhat cua %d va %d la %d \n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la %d \n", a, b, bcnn);
}

void chucNang3()
{
    int gioVao, gioRa, tongTien, soGio;
    do
    {
        printf("Nhap gio vao va gio ra: ");
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
    printf("Tong tien karaok tu %d den %d la :%dVND\n", gioVao, gioRa, tongTien);
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
    int soKW, tongtien = 0;

    printf("Nhap so KW tieu thu: ");
    scanf("%d", &soKW);
    if (soKW <= bangGiaDien[0].mucTieuThu)
    {
        tongtien = soKW * bangGiaDien[0].gia;
    }
    else if (soKW <= bangGiaDien[1].mucTieuThu)
    {
        tongtien = 50 * bangGiaDien[0].gia + (soKW - 50) * bangGiaDien[1].gia;
    }
    else if (soKW <= bangGiaDien[2].mucTieuThu)
    {
        tongtien = 50 * bangGiaDien[0].gia + (50) * bangGiaDien[1].gia + (soKW - 100) * bangGiaDien[2].gia;
    }
    else if (soKW <= bangGiaDien[3].mucTieuThu)
    {
        tongtien = 50 * bangGiaDien[0].gia + (50) * bangGiaDien[1].gia + (100) * bangGiaDien[2].gia + (soKW - 200) * bangGiaDien[3].gia;
    }
    else if (soKW <= bangGiaDien[4].mucTieuThu)
    {
        tongtien = 50 * bangGiaDien[0].gia + (50) * bangGiaDien[1].gia + (100) * bangGiaDien[2].gia + (100) * bangGiaDien[3].gia + (soKW - 300) * bangGiaDien[4].gia;
    }
    else
    {
        tongtien = 50 * bangGiaDien[0].gia + (50) * bangGiaDien[1].gia + (100) * bangGiaDien[2].gia + (100) * bangGiaDien[3].gia + (100) * bangGiaDien[4].gia + (soKW - 400) * bangGiaDien[5].gia;
    }
    printf("Tong tien tieu thu cua %d KW la :%d\n", soKW, tongtien);
}
void chucnang5()
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
        if (temp == 0)
            break;
    }

    for (int i = sopt - 1; i >= 0; i--)
    {
        if (dstiente[i].soluongto > 0)
        {
            printf("Menh gia: %6d | So to: %d\n", dstiente[i].menhGia, dstiente[i].soluongto);
        }
    }
}

void chucnang6()
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

void chucnang7()
{
    double giaXe;
    printf("Nhap gia tri xe (VND): ");
    scanf("%lf", &giaXe);

    double phanTramVay = 0.8;
    double tienVay = giaXe * phanTramVay;
    double tienTraTruoc = giaXe * (1.0 - phanTramVay);
    int nam = 24;
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

void chucnang8()
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien sv[100];
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ho va ten: ");
        fflush(stdin);
        getchar(); // Đọc ký tự thừa
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
    printf("Nhap hai so(1-15):");
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

    default:
        break;
    }
}
void chucNang10()
{
    struct phanSo ps1, ps2, psTong, psHieu, psTich, psThuong;
    printf("Nhap phan so 1(tu mau):");
    scanf("%d%d", &ps1.tu, &ps1.mau);
    printf("Nhap phan so 2(tu mau):");
    scanf("%d%d", &ps2.tu, &ps2.mau);

    psTong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    psTong.mau = ps1.mau * ps2.mau;

    psHieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    psTong.mau = ps1.mau * ps2.mau;

    psTich.tu = ps1.tu * ps2.tu;
    psTich.mau = ps1.mau * ps2.mau;

    psThuong.tu = ps1.tu * ps2.mau;
    psThuong.mau = ps1.mau * ps2.tu;
    printf("Tong:%d/%d+%d/%d=%d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psTong);
    printf("Hieu:%d/%d+%d/%d=%d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psHieu);
    printf("Tich:%d/%d+%d/%d=%d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psTich);
    printf("Thuong:%d/%d+%d/%d=%d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau, psThuong);
}