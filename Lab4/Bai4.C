#include <stdio.h>
#include <stdlib.h>
int main(){
    int chon;   // Biến chọn menu

    do{
        // ============================
        // MENU CHÍNH
        // ============================
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Tinh trung binh cac so tu nhien chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat chuong trinh\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch(chon){
            // ======================================
            // BÀI 1: TÍNH TRUNG BÌNH SỐ CHẴN
            // ======================================
            case 1: {
                int min, max, i;
                float tong = 0, bienDem = 0, trungBinh = 0;

                printf("\n=== BAI 1: TRUNG BINH SO CHIA HET CHO 2 ===\n");
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
                    printf("Trung binh cac so chan: %.2f\n", trungBinh);
                }else{
                    printf("Khong co so chan nao!\n");
                }
                break;
            }

            // ======================================
            // BÀI 2: KIỂM TRA SỐ NGUYÊN TỐ
            // ======================================
            case 2: {
                int x, i, count = 0;
                printf("\n=== BAI 2: KIEM TRA SO NGUYEN TO ===\n");
                printf("Nhap x: ");
                scanf("%d", &x);

                count = 0;
                for(i = 2; i < x; i++){
                    if(x % i == 0)
                        count++;
                }

                if(count == 0 && x > 1)
                    printf("%d la so nguyen to\n", x);
                else
                    printf("%d khong phai la so nguyen to\n", x);

                break;
            }

            // ======================================
            // BÀI 3: KIỂM TRA SỐ CHÍNH PHƯƠNG
            // ======================================
            case 3: {
                int x, i, found = 0;
                printf("\n=== BAI 3: KIEM TRA SO CHINH PHUONG ===\n");
                printf("Nhap x: ");
                scanf("%d", &x);

                for(i = 1; i < x; i++){
                    if(i * i == x){
                        printf("%d la so chinh phuong (vi %d * %d = %d)\n", x, i, i, x);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("%d khong phai la so chinh phuong\n", x);

                break;
            }

            // ======================================
            // THOÁT CHƯƠNG TRÌNH
            // ======================================
            case 4:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le, moi chon lai!\n");
                break;
        }

    } while(chon != 4);

    return 0;
}
