#include <stdio.h>

int main()
{
    int x, y, tong, hieu;
    printf("Nhap vao 2 so nguyen x va y:");
    scanf("%d %d", &x, &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong cua 2 so nguyen la: %d\n", tong);
    printf("Hieu cua 2 so nguyen la: %d\n", hieu);
    return 0;
   
}