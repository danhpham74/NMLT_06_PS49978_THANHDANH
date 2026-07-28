#include <stdio.h>
#include <math.h>
int main()
{
    int i,chon,songuyen,a,b;
    float diem;
    double x,kwh;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|-----------MENU CHUONG TRINH ASSIGNMENT------------|\n");
        printf("+...................................................+\n");
        printf("|1.Chuc nang kiem tra so nguyen                     |\n");
        printf("|2.Chuc nang tim uoc so chung va boi chung cua 2 so |\n");
        printf("|3.Chuc nang tinh tien dien                         |\n");
        printf("|4.Chuc nang tinh tien cho quan karaoke             |\n");
        printf("|5.Chuc nang tinh lai suat ngan hang vay tra gop    |\n");
        printf("|6.Chuc nang sap xep thong tin sinh vien            |\n");
        printf("|7.Chuc nang tinh toan phan so                      |\n");
        printf("|10.Thoat chuong trinh                              |\n");
        printf("+---------------------------------------------------+\n");
        printf("Ban hay chon chuc nang 1-10:");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1: kiem tra so nguyen \n");
            printf("Nhap so bat ki: ");
            scanf("%d", &songuyen);
            if(songuyen>0){
                printf("la so nguyen duong\n",songuyen);
            }else if(songuyen<0){
                printf("la so nguyen am\n",songuyen);
            }else{
                printf("so %d la so nguyen\n",songuyen);
            }
                
            break;
        case 2:
            printf("Ban da chon chuc nang 2:tim uoc so chung va boi chung cua 2 so\n");
            printf("Nhap 2 so a,b: ");
            scanf("%d %d", &a, &b);
            printf("so %d va %d co cac uoc chung la: ", a,b);
            int min;
            if( a<b){
                min=a;
            }else{
                min=b;
            }
            for(i=1; i<=min; i++){
            if(a%i == 0&& b%i==0){
            printf("%d", i);
        }

    }       
            int k;
            printf("\n\nso %d va %d co cac boi chung la: ", a,b);
            for(k=0;k<=100;k++){
                if(k%a==0 && k%b==0 ){
                    printf("%d ", k);
                }
            }      
            printf("...");
            printf("\n");
            break;
        case 3:
            printf("Ban da chon chuc nang 3: tinh tien dien\n");
            printf("Nhap vao tong so kwh da tieu thu trong thang: ");
            scanf("%lf", &kwh);

            if (kwh <= 0) {
            printf("So kwh khong hop le, vui long nhap so lon hon 0 (so duong)\n");
    } else {
        double Tongtien = 0;

        if (kwh <= 50) {
            Tongtien = kwh * 1678;
        } else {
            if (kwh <= 100) {
                Tongtien = (50 * 1678) + (kwh - 50) * 1734;
            } else {
                if (kwh <= 200) {
                    Tongtien = (50 * 1678) + (50 * 1734) + (kwh - 100) * 2014;
                } else {
                    if (kwh <= 300) {
                        Tongtien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (kwh - 200) * 2536;
                    } else {
                        if (kwh <= 400) {
                            Tongtien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (kwh - 300) * 2834;
                        } else {
                           Tongtien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + (kwh - 400) * 2927;
                        }
                    }
                }
            }
        }

        printf("Tong tien dien phai tra: %.0lf VND\n", Tongtien);
    }
    break;
        case 4:
            double batdau,ketthuc,tongtien;
            printf("Ban da chon chuc nang 4: tinh tien cho quan karaoke\n");
            printf("nhap thoi gian bat dau hat : ");
            scanf("%lf", &batdau);
            printf("nhap thoi gian ket thuc hat : ");
            scanf("%lf", &ketthuc);
            double tonggio = ketthuc - batdau;
            printf("tong thoi gian hat la: %.2lf gio\n",tonggio);
            if(tonggio<=1){
                tongtien = tonggio*100000; 
            }else{
                if(tonggio<=4){
                    tongtien =(1*100000)+(tonggio-1)*120000;
                }else{
                    if(tonggio<=8){
                        tongtien =(1*100000)+(3*120000)+(tonggio-4)*150000;
                    }else{
                        tongtien=(1*100000)+(3*120000)+(4*150000)+(tonggio-8)*190000;
                    }
                }
            }
            printf("so tien ban can phai tra la:%.0lf VND \n",tongtien);
            break;
        case 5 :
            double vay;
            int x;
            printf("Ban da chon chuc nang 5:tinh lai suat ngan hang vay tra gop\n");
            printf("Ban hay chon khoan vay: ");
            scanf("%lf",&vay);
            if(vay>10000000){
                printf("Khoan vay vuot qua han muc cho phep\n");
            }else{
                if(vay>=500000 && vay<=10000000){
                printf("\nHay chon ki han ban muon vay: 3 6 9 thang: ",x);
                scanf("%d",&x);
                }
            }
                if(x==3){
                double lai=vay*0.043;
                double goc=vay/3;
                double tongtien=goc+lai;
                printf("So tien phai tra trong 1 thang la: %.0lf VND \n",tongtien); 
            }
            if(x==6){
                double lai=vay*0.043;
                double goc=vay/6;
                double tongtien=goc+lai;
                printf("So tien phai tra trong 1 thang la: %.0lf VND \n",tongtien);
            }
            if(x==9){
                double lai=vay*0.043;
                double goc=vay/9;
                double tongtien=goc+lai;
                printf("So tien phai tra trong 1 thang la: %.0lf VND \n",tongtien);
            }
            break;
        case 10:
            printf("Ban da chon chuc nang 10: Thoat chuong trinh\n");
            break;
        default:
            printf("Ban phai chuc nang 1-10\n");
            break;
        }
    } while (chon != 10); 

    return 0;
} 