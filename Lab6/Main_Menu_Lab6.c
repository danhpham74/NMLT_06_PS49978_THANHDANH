#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

float tinhTrungBinhCong(int a[], int n);
void timMaxMin(int a[], int n);
void sapXepGiamDan(int a[], int n);
void maTranBinhPhuong(int row, int col);
void xuatSoLeMaTran(int row, int col);
void swap(int *a, int *b);
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
            printf("Ban da thoat chuong trinh");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 6\n");
            break;
        }
    } while (chon != 6);

    return 0;
}

void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 6               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri lon nhat va nho nhat trong mang    |\n");
    printf("| 3. Sap xep mang theo gia tri giam dan             |\n");
    printf("| 4. Ma tran binh phuong(mang 2 chieu)              |\n");
    printf("| 5. Loc va xuat ca vi tri so le trong ma tran      |\n");
    printf("| 6. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1()
{
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap A[%d]= ", i);
        scanf("%d", &a[i]);
    }
    float tbc = tinhTrungBinhCong(a, n);
    if (tbc == -FLT_MAX)
    {
        printf("Khong co so chia het cho 3 va 5\n");
    }
    else
    {
        printf("Trung binh cong cua mang: %.2f\n", tbc);
    }
}

void chucNang2()
{
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap A[%d]= ", i);
        scanf("%d", &a[i]);
    }
    timMaxMin(a, n);
}

void chucNang3()
{
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap A[%d]= ", i);
        scanf("%d", &a[i]);
    }
    sapXepGiamDan(a, n);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void chucNang4()
{
    maTranBinhPhuong(3, 3);
}

void chucNang5()
{
    xuatSoLeMaTran(3, 3);
}

float tinhTrungBinhCong(int a[], int n)
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
        return -FLT_MAX;
    }
    else
    {
        return (float)tong / soDem;
    }
}

void timMaxMin(int a[], int n)
{

    int min, max;
    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {

            min = a[i];
        }
        if (max < a[i])
        {

            max = a[i];
        }
    }
    printf("Min = %d\t Max = %d\n", min, max);
}

void sapXepGiamDan(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void maTranBinhPhuong(int row, int col)
{
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d,%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d\t", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}
void xuatSoLeMaTran(int row, int col)
{
    int a[row][col];

    printf("Nhap ma tran (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCac phan tu le trong ma tran:\n");
    int soDem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("Phan tu le tai a[%d][%d] = %d\n", i, j, a[i][j]);
                soDem++;
            }
        }
    }

    if (soDem == 0)
    {
        printf("Khong co so le nao trong ma tran.\n");
    }
}