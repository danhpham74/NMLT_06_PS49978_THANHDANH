#include <stdio.h>
int main(){
    int n,m,tong;
    //in các số từ 1-10
    for(int i=0; i<=10; i++){
        printf("%d\t",i);
    }
    //in các số chẵn 1-10
    printf("\n\nin cac so chan 1-10 - giam so lan lap\n");
    for(int i=1; i<=10; i++){
        if(i%2 ==0){
            printf("%d\t",i);
        }
    }
    //in các số chia hết cho 3 từ 1-100
    for(int i=1; i<=100; i++){
        if(i%3 ==0){
            printf("%d\t",i);
        }
    }
    //in boi cua n va m (nhap tu ban phim)giua cac so tu 1-100
    printf("\n\nin boi cua n va m (nhap tu ban phim)giua cac so tu 1-100\n");
    printf("nhap n,m:");
    scanf("%d%d",&n,&m);
    for(int i=1; i<=100; i++){
        if(i%n ==0 && i%m ==0){
            printf("%d\t",i);
        }
    }

    //nhap vao n, in bang cuu chuong cua n
    printf("\nnhap n:");
    scanf("%d",&n);
    printf("\n\nbang cuu chuong %d\n",n);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;

    //tong so hat gao qua cac o ban co vua
    printf("\n\ntong so hat gao qua cac o o ban co vua");
    n = 1;
    tong = 0;
    for()

}