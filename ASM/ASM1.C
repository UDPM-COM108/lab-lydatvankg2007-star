#include <stdio.h>
#include <stdlib.h>

int main() {
    int luachon;

    do {
        printf("\n================== MENU ==================\n");
        printf("1. Chức năng số 1: Kiểm tra số nguyên\n");
        printf("2. Chức năng 2: Tìm ước số chung và bội số chung của 2 số\n");
        printf("3. Chức năng 3: Chương trình tính tiền cho quán Karaoke\n");
        printf("4. Chức năng 4: Tinh tien dien\n");
        printf("5. Chức năng 5: Chuc nang doi tien\n");
        printf("6. Chức năng 6: Tinh lai vay ngan hang tra gop\n");
        printf("7. Chức năng 7: Chuong trinh vay tien mua xe\n");
        printf("8. Chức năng 8: Sap xep thong tin sinh vien\n");
        printf("9. Chức năng 9: Game FPOLY-LOTT (2/15)\n");
        printf("10. Chức năng 10: Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("==========================================\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
        case 1:
            printf("Ban da chon chuc nang 1: Kiem tra so nguyen\n");
            break;

        case 2:
            printf("Ban da chon chuc nang 2: Tim UCLN & BCNN\n");
            break;

        case 3:
            printf("Ban da chon chuc nang 3: Tinh tien Karaoke\n");
            break;

        case 4:
            printf("Ban da chon chuc nang 4: Tinh tien dien\n");
            break;

        case 5:
            printf("Ban da chon chuc nang 5: Doi tien\n");
            break;

        case 6:
            printf("Ban da chon chuc nang 6: Tinh lai vay ngan hang\n");
            break;

        case 7:
            printf("Ban da chon chuc nang 7: Vay tien mua xe\n");
            break;

        case 8:
            printf("Ban da chon chuc nang 8: Sap xep sinh vien\n");
            break;

        case 9:
            printf("Ban da chon chuc nang 9: Game FPOLY-LOTT\n");
            break;

        case 10:
            printf("Ban da chon chuc nang 10: Tinh toan phan so\n");
            break;

        case 0:
            printf("Dang thoat chuong trinh...\n");
            break;

        default:
            printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }

    } while (luachon != 0);

    return 0;
}