#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <float.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();

int main()
{
    int chon;
    do
    {
        menu();
        printf("Ban hay chon chuc nang tu (1-5): ");
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
    printf("|             MENU CHUONG TRINH LAB 7               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Dem Nguyen am va Phu am trong moi chuoi        |\n");
    printf("| 2. Dang nhap he thong (User va Password)          |\n");
    printf("| 3. Sap xep danh sach chuoi theo thu tu Alphabet   |\n");
    printf("| 4. Chuyen doi thap phan sang nhi phan(chuoi)      |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1()
{
    char s[256];
    int demNA = 0;
    int demPA = 0;
    printf("Nhap chuoi ki tu: ");
    if(fgets(s,sizeof(s),stdin) != NULL){
        demNguyenamPhuam
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
void demNguyenamPhuam(const char *s,int *demNA,int *demPA)
{
    *demNA = 0;
    *demPA = 0;
    for(int i = 0;s[i] != '\0';i++){

    }
}