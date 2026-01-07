#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
// Bài 1: Mảng 1 chiều

// Hàm xuất mảng
void xuatMang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

// Hàm đổi chỗ 2 phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng theo thứ tự tăng dần bằng đổi chỗ trực tiếp
void sapXepTangDan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

int main()
{
    int n;
    printf("Nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap thong tin mang: \n");
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Mang vua nhap la: ");
    xuatMang(a, n);

    sapXepTangDan(a, n);
    printf("\nMang sau khi sap xep tang dan la: ");
    xuatMang(a, n);

    return 0;
}

// Độ phức tạp cho toàn chương trình: T(n) = O(n^2)
*/

/*
// Bài 2: Nhap thong tin cho vé xem phim

// Kiểu THOIGIAN
typedef struct ThoiGian{
    int gio;
    int phut;
} THOIGIAN;

// Kiểu dữ liệu ngày
typedef struct Ngay{
    int ngay;
    int thang;
    int nam;
} NGAY;

// Kiểu dữ liệu vé xem phim
typedef struct VeXemPhim{
    char tenPhim[21];
    int giaTien;
    THOIGIAN xuatChieu;
    NGAY ngay;
} VE;

// Hàm nhập thông tin
void nhapThongTin(VE *ve) {

    printf("\n ===== Nhap thong tin ve xem phim ===== \n");
    printf("Nhap ten phim: ");
    fgets(ve->tenPhim, sizeof(ve->tenPhim), stdin);
    ve->tenPhim[strcspn(ve->tenPhim, "\n")] = '\0'; //Loại bỏ '\n' nếu có

    printf("Nhap gia tien: ");
    scanf("%d", &ve->giaTien);

    printf("Nhap xuat chieu (gio phut): ");
    scanf("%d %d", &ve->xuatChieu.gio, &ve->xuatChieu.phut);

    printf("Nhap ngay xem (ngay thang nam): ");
    scanf("%d %d %d", &ve->ngay.ngay, &ve->ngay.thang, &ve->ngay.nam);
}

// Hàm xuất thông tin
void xuatThongTIn(VE ve) {
    printf("\n ===== Thong tin ve xem phim ===== \n");
    printf("Ten phim: %s\n", ve.tenPhim);
    printf("Gia tien: %d vnd\n", ve.giaTien);
    printf("Xuat chieu: %02d:%02d\n", ve.xuatChieu.gio, ve.xuatChieu.phut);
    printf("Ngay xem: %02d/%02d/%02d\n", ve.ngay.ngay, ve.ngay.thang, ve.ngay.nam);
}

int main() {
    VE ve1;
    nhapThongTin(&ve1);
    xuatThongTIn(ve1);

    return 0;
}
// Độ phức tạp cho toàn chương trình: T(n) = O(1)
*/
