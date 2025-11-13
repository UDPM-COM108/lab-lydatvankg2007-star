#include <stdio.h>

int main (){
    double diem; /*
    printf("Nhap diem: ");
    scanf("%lf", &diem);
    if(diem>=5){
        printf("Dau!!!");
    }else {
        printf("Rot$$$");
    }
// Tính học lực SV
    printf("\nNhap diem tong ket: ");
    scanf("%lf", &diem);
    if (diem>=9 && diem<=10){
        printf("Xep loai: Xuat sac\n");  
    } else if (diem>=8){
        printf("Xep loai: Gioi\n");
    } else if (diem>=7 && diem<8){
        printf("Xep loai: Kha\n");
    } else if (diem>=5 && diem<7){
        printf("Xep loai: Trung binh\n");
    } else {
        printf("Xep loai: Yeu\n");
    } */

    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi ban chon dap an (a,b,c,d): ");
    char dapAn;
    scanf("%s", &dapAn);
    switch(dapAn){
        case 'a': printf("Ban da chon sai\n");
            break;
        case 'b': printf("Ban da chon sai\n");
            break;
        case 'c': printf("Ban da chon dung\n");
            break;
        case 'd': printf("Ban da chon sai\n");
            break;
        default:
            printf("Ban chon khong dung bo dap an (a,b,c,d)");
}
return 0;
}