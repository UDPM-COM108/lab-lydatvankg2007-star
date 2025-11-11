#include <stdio.h>
#include <math.h>
#define PI 3.14
// #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ 

int main()
{
    int x, y, tong, hieu;
    printf("Nhap vao 2 so nguyen x va y:");
    scanf("%d %d", &x, &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong cua 2 so nguyen la: %d\n", tong);
    printf("Hieu cua 2 so nguyen la: %d\n", hieu);
   
// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float cdai, crong;
    float chuvi, dientich;
    printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &cdai, &crong);
    chuvi=(cdai + crong)*2;
    dientich=cdai*crong;
    printf("Chu vi hinh chu nhat la: %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);

// #BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    double banKinh, chuvi_tron, dientich_tron;
    printf("Nhap vao ban kinh hinh tron:");
    scanf("%lf", &banKinh);
    chuvi_tron = 2 * PI * banKinh;
    dientich_tron = PI * banKinh * banKinh;
    printf("Chu vi hinh tron la: %.2lf\n", chuvi_tron);
    printf("Dien tich hinh tron la: %.2lf\n", dientich_tron);

// #Bài 4: Tính điểm trung bình toán, lý, hóa
    float toan, ly, hoa, dtb;
    printf("Nhap diem toan, ly, hoa: ");
    scanf("%f %f %f", &toan, &ly, &hoa);
    dtb = (toan + ly + hoa) / 3;
    printf("Diem trung binh la: %.2f\n", dtb);
// #Bài 5: Tính chuvi, dientich hình tam giác vuông
    float canhA, canhB, chuvi_tg, dientich_tg, canhC;
    printf("Nhap do dai 2 canh ke hinh tam giac vuong: ");
    scanf("%f %f", &canhA, &canhB);
    canhC = sqrt(canhA * canhA + canhB * canhB);
    chuvi_tg = canhA + canhB + canhC;
    dientich_tg = (canhA * canhB) / 2;
    printf("Chu vi hinh tam giac vuong la: %.2f\n", chuvi_tg);
    printf("Dien tich hinh tam giac vuong la: %.2f\n", dientich_tg);
    return 0;
}