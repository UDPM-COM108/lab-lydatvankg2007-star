#include <stdio.h>
#include <math.h>

int main() 
{
    double banKinh, chuvi, dientich;
    printf("Nhap vao ban kinh hinh tron:");
    scanf("%lf", &banKinh);
    chuvi = 2 * M_PI * banKinh;
    dientich = M_PI * banKinh * banKinh;
    printf("Chu vi hinh tron la: %2lf\n", chuvi);
    printf("Dien tich hinh tron la: %2lf\n", dientich);
    return 0;
}