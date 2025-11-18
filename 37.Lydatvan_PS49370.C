#include <stdio.h>
#include <math.h>
#include <stdlib.h> // exit()

int main()
{
    int luachon;
    printf("Chọn chương trình tính toán\n");
    printf("1. Tính học lực\n");
    printf("2. Giải phương trình bậc nhất\n");
    printf("3. Giải phương trình bậc hai\n");
    printf("4. Tính tiền điện\n");
    printf("0. Thoát\n");
    printf("Mời bạn nhập lựa chọn: ");
    scanf("%d", &luachon);
    switch (luachon) 
    {
        case 1:
        {
            printf("Tính học lực:\n");
            // # bài 1: XÂY DỰNG cHƯƠNG TRÌNH TÍNH HỌc LỰc
            double dtb;
            printf("Nhap vao dtb cua ban: ");
            scanf("%lf", &dtb);

            if (dtb >= 9)
            {
                printf("Hoc luc: Xuat sac");
            }
            else if (dtb >= 8 && dtb < 9)
            {
                printf("Hoc luc: Gioi");
            }
            else if (dtb >= 6.5 && dtb < 8)
            {
                printf("Hoc luc: Kha");
            }
            else if (dtb >= 5 && dtb < 6.5)
            {
                printf("Hoc luc: Trung binh");
            }
            else
            {
                printf("Hoc luc: Yeu");
            }
            break;
        }
        case 2:
        {
            printf("Giải phương trình bậc nhất:\n");
            // # bài 2: Giải phương trình bậc nhất
            float a, b;
            printf("\nNhap vao a va b: ");
            scanf("%f %f", &a, &b);

            if (a == 0)
            {
                if (b == 0)
                {
                    printf("Phuong trinh vo so nghiem!");
                }
                else
                    printf("Phuong trinh vo nghiem");
            }
            else
                printf("Phuong trinh co 1 nghiem x = %.2f", -b / a);
            break;
        }
        case 3:
        {
            printf("Giải phương trình bậc hai:\n");
            // # bài 3: Giải Phương trình bậc 2
            float A, B, C, delta, x1, x2;

            printf("\nNhap A, B, C: ");
            scanf("%f %f %f", &A, &B, &C);

            if (A == 0)
            {
                if (B == 0)
                {
                    if (C == 0)
                        printf("Phuong trinh co vo so nghiem.\n");
                    else
                        printf("Phuong trinh vo nghiem.\n");
                }
                else
                {
                    x1 = -C / B;
                    printf("Phuong trinh co nghiem x = %.2f\n", x1);
                }
            }
            else
            {
                delta = B * B - 4 * A * C;

                if (delta < 0)
                {
                    printf("Phuong trinh vo nghiem.\n");
                }
                else if (delta == 0)
                {
                    x1 = -B / (2 * A);
                    printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
                }
                else
                {
                    x1 = (-B + sqrt(delta)) / (2 * A);
                    x2 = (-B - sqrt(delta)) / (2 * A);
                    printf("Phuong trinh co 2 nghiem phan biet:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;
        }
        case 4:
        {
            int kwh;
            float tien = 0;
            printf("Nhap so kWh tieu thu trong thang: ");
            scanf("%d", &kwh);
            if (kwh < 0)
            {
                printf("So kWh khong hop le!");
                return 0;
            }
            if (kwh <= 50)
            {
                tien = kwh * 1678;
            }
            else if (kwh <= 100)
            {
                tien = 50 * 1678 + (kwh - 50) * 1734;
            }
            else if (kwh <= 200)
            {
                tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
            }
            else if (kwh <= 300)
            {
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
            }
            else if (kwh <= 400)
            {
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
            }
            else
            {
                tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
            }
            printf("So tien dien phai tra la: %.0f dong\n", tien);
            break;
        }
        case 0:
        {
            printf("Hẹn gặp lại bạn!!!");
            exit(0);
            break;
        }
        default:
        {
            printf("Bạn vui lòng chọn đúng lựa chọn trong bộ đề");
            break;
        }
    }
    return 0;
}