#include <stdio.h>
#include <string.h>

int main() {
    char mssv[20];
    char ho_ten[100];
    float diem_toan, diem_ly, diem_hoa;
    float diem_trung_binh;
    
    // Nhap du lieu tu ban phim
    printf("Nhap Ma so sinh vien: ");
    fgets(mssv, sizeof(mssv), stdin);
    // Xoa ky tu newline
    mssv[strcspn(mssv, "\n")] = '\0';
    
    printf("Nhap Ho va Ten: ");
    fgets(ho_ten, sizeof(ho_ten), stdin);
    // Xoa ky tu newline
    ho_ten[strcspn(ho_ten, "\n")] = '\0';
    
    printf("Nhap Diem Toan: ");
    scanf("%f", &diem_toan);
    
    printf("Nhap Diem Ly: ");
    scanf("%f", &diem_ly);
    
    printf("Nhap Diem Hoa: ");
    scanf("%f", &diem_hoa);
    
    // Tinh diem trung binh theo cong thuc: (Toan * 2 + Ly + Hoa) / 4
    diem_trung_binh = (diem_toan * 2 + diem_ly + diem_hoa) / 4;
    
    // In ket qua theo dinh dang yeu cau
    printf("\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", ho_ten);
    printf("Diem Trung Binh: %.2f\n", diem_trung_binh);
    
    return 0;
}
