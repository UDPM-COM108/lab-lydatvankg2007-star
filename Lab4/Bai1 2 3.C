#include <stdio.h>
#include <math.h>

// BÀI 1: TÍNH TRUNG BÌNH SỐ CHẴN
int main(){
    int min, max;
    int i;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    i = min;
    while(i <= max){
        if(i % 2 == 0){
            tong += i;
            bienDem++;
        }
        i++;
    }

    if(bienDem > 0){
        trungBinh = tong / bienDem;
        printf("Trung binh cac so chan tu %d den %d la: %.2f\n", min, max, trungBinh);
    }else{
        printf("Khong co so chan nao trong khoang!\n");
    }

// BÀI 2: KIỂM TRA SỐ NGUYÊN TỐ
    int x, count = 0;

    printf("Nhap x: ");
    scanf("%d", &x);

    count = 0;
    for(i = 2; i < x; i++){
        if(x % i == 0){
            count++;
        }
    }

    if(count == 0 && x > 1){
        printf("%d la so nguyen to\n", x);
    }else{
        printf("%d khong phai la so nguyen to\n", x);
    }

    // BÀI 3: KIỂM TRA SỐ CHÍNH PHƯƠNG
    printf("Nhap x: ");
    scanf("%d", &x);

    int found = 0;

    for(i = 1; i < x; i++){
        if(i * i == x){
            printf("%d la so chinh phuong (vi %d * %d = %d)\n", x, i, i, x);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("%d khong phai la so chinh phuong\n", x);
    }

// Bài 4: XÂY DỰNG CHƯƠNG TRÌNH CHO CÁC BẠN TRÊN.

    return 0;
}
