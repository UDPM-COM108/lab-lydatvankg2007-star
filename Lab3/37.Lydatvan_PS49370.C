#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tinh_hoc_luc();
void giai_pt_bac_nhat();
void giai_pt_bac_hai();
void tinh_tien_dien();

int main(void) {
    int luachon;

    do {
        // 1. HIỂN THỊ MENU
        printf("\n================ MENU CHUONG TRINH =================\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac nhat (ax + b = 0)\n");
        printf("3. Giai phuong trinh bac hai (ax^2 + bx + c = 0)\n");
        printf("4. Tinh tien dien\n");
        printf("5. Thoat\n");
        printf("====================================================\n");
        printf("Nhap lua chon cua ban: ");

        if (scanf("%d", &luachon) != 1) {
            printf("\nLoi: Lua chon khong hop le. Vui long chi nhap so.\n");
            while (getchar() != '\n');
            luachon = 5; 
        }

        // 2. XỬ LÝ LỰA CHỌN
        switch (luachon) {
            case 1:
                tinh_hoc_luc();
                break;
            case 2:
                giai_pt_bac_nhat();
                break;
            case 3:
                giai_pt_bac_hai();
                break;
            case 4:
                tinh_tien_dien();
                break;
            case 5:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                exit(0);
            default:
                printf("\nLua chon khong ton tai. Vui long chon lai tu 1 den 5.\n");
        }
        
    } while (luachon != 5); 

    return 0;
}


// 3. ĐỊNH NGHĨA CÁC HÀM CHỨC NĂNG

void tinh_hoc_luc() {
    double diem;
    printf("\n--- Chuc nang: Tinh Hoc Luc ---\n");
    printf("Nhap diem trung binh (0-10): ");
    if (scanf("%lf", &diem) != 1) {
        printf("Gia tri nhap khong hop le.\n");
        while (getchar() != '\n'); 
        return;
    }
    
    if (diem >= 9) {
        printf("Ket qua: Hoc Luc Xuat Sac\n");
    } else if (diem >= 8) {
        printf("Ket qua: Hoc Luc Gioi\n");
    } else if (diem >= 6.5) {
        printf("Ket qua: Hoc Luc Kha\n");
    } else if (diem >= 5) {
        printf("Ket qua: Hoc Luc Trung Binh\n");
    } else {
        printf("Ket qua: Hoc Luc Yeu\n");
    }
}

void giai_pt_bac_nhat() {
    double a, b;
    printf("\n--- Chuc nang: Giai PT Bac Nhat (ax + b = 0) ---\n");
    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Gia tri a khong hop le.\n");
        while (getchar() != '\n'); return;
    }
    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Gia tri b khong hop le.\n");
        while (getchar() != '\n'); return;
    }

    if (a == 0.0) {
        if (b == 0.0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        double x = -b / a;
        printf("Phuong trinh co nghiem duy nhat: x = %.6f\n", x);
    }
}

void giai_pt_bac_hai() {
    double a, b, c, delta;
    printf("\n--- Chuc nang: Giai PT Bac Hai (ax^2 + bx + c = 0) ---\n");
    printf("Nhap a, b, c:\n");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Gia tri nhap khong hop le.\n");
        while (getchar() != '\n'); return;
    }

    if (a == 0.0) {
        // PT tro ve bac nhat: bx + c = 0
        printf("a = 0. PT tro thanh PT bac nhat (%.2fx + %.2f = 0)\n", b, c);
        if (b == 0.0) {
            if (c == 0.0) printf("Phuong trinh co vo so nghiem.\n");
            else printf("Phuong trinh vo nghiem.\n");
        } else {
            double x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %.6f\n", x);
        }
    } else {
        delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.6f\n", x);
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.6f, x2 = %.6f\n", x1, x2);
        }
    }
}

void tinh_tien_dien() {
    double soDien, tienDien;
    printf("\n--- Chuc nang: Tinh Tien Dien ---\n");
    printf("Nhap so dien tieu thu (kWh): ");
    if (scanf("%lf", &soDien) != 1) {
        printf("Gia tri nhap khong hop le.\n");
        while (getchar() != '\n'); return;
    }
    
    if (soDien < 0) {
        printf("So dien khong the am.\n");
    } else if (soDien <= 50) {
        tienDien = soDien * 1000;
        printf("Ap dung bac 1 (1000 VND/kWh)\n");
    } else {
        tienDien = 50 * 1000 + (soDien - 50) * 1200;
        printf("Ap dung bac 1 va bac 2 (1000/1200 VND/kWh)\n");
    }
    
    printf("Tong so tien dien phai tra: %.2f VND\n", tienDien);
}