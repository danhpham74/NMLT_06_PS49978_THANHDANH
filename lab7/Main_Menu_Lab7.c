#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
    char s[50];
    char strNA[10] = "ueoai";
    int demNA = 0;
    int demPA = 0;
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        char c = tolower((unsigned char)s[i]);
        if (isalpha((unsigned char)c))
        {
            if (strchr(strNA, c) != NULL)
            {
                demNA++;
            }
            else
            {
                demPA++;
            }
        }
    }
    printf("Chuoi moi nhap: %s\n", s);
    printf("So nguyen am: %d\tSo phu am: %d\n", demNA, demPA);
}

void chucNang2()
{

    char User[20];
    char Password[20];
    char userSys[] = "ThanhDanh";
    char PassSys[] = "Danh742007";
    printf("User name: ");
    fgets(User, sizeof(User), stdin);
    User[strcspn(User, "\n")] = 0;
    printf("Password: ");
    fgets(Password, sizeof(Password), stdin);
    Password[strcspn(Password, "\n")] = 0;
    if (strcmp(User, userSys) == 0 && strcmp(Password, PassSys) == 0)
    {
        printf("Dang nhap thanh cong\n");
    }
    else
    {
        printf("Sai UserName hoac Password\n");
    }
}

void chucNang3()
{
}

void chucNang4()
{
}
