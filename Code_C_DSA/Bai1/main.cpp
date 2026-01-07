#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
//Nhập/ xuất mảng 1 chiều và in mảng theo thứ tự tăng dần

// Hàm xuất mảng
void inMang(int a[], int n) {
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

}

// Hàm đổi chỗ 2 phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp tăng dần
void sapXepTangDan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++ ) {
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << "Mang truoc khi sap xep: " << endl;
    inMang(a, n);

    sapXepTangDan(a, n);
    cout << "\nMang sau khi sap xep tang dan: " << endl;
    inMang(a, n);
    return 0;
}
*/

// Bài 2: Tạo 1 struct ve xem phim, viết hàm nhập và xuất
// Cấu trúc kiểu thời gian
typedef struct ThoiGian{
    int gio;
    int phut;
    int giay;
} ThoiGian;

// Cấu trúc kiểu ngày
typedef struct Ngay{
    int ngay;
    int thang;
    int nam;
} Ngay;

// Cấu trúc vé xem phim
typedef struct VeXemPhim{
    char tenPhim[21];
    int giaTien;
    ThoiGian xuatChieu;
    Ngay ngay;

} VE;


int main() {
    VE ve;
    cout << "====Nhap thong tin cho ve xem phim====" << endl;
    cout << "Nhap ten phim: \n";
    cin.getline(ve.tenPhim, 21);
    cout << "Nhap gia tien: \n";
    cin >> ve.giaTien;

    cout << "Nhap thong tin xuat chieu: \n";
    cout << "Nhap gio chieu: ";
    cin >> ve.xuatChieu.gio;

    cout << "\n Nhap phut: ";
    cin >> ve.xuatChieu.phut;

    cout << "\n Nhap giay: ";
    cin >> ve.xuatChieu.giay;

    cout << "\n Nhap thong tin ngay xem: ";
    cout << "\n Nhap ngay: ";
    cin >> ve.ngay.ngay;

    cout << "\n Nhap thang: ";
    cin >> ve.ngay.thang;

    cout << "\n Nhap nam: ";
    cin >> ve.ngay.nam;


    cout << "\n =====Thong tin ve xem phim vua nhap===== \n";
    cout << "Ten phim: " << ve.tenPhim << endl;
    cout << "Gia tien: " << ve.giaTien << endl;
    cout << "Xuat chieu: " << ve.xuatChieu.gio << ":" << ve.xuatChieu.phut
    << ":" << ve.xuatChieu.giay << endl;
    cout << "Ngay xem: " << ve.ngay.ngay << "/" << ve.ngay.thang
    << "/" << ve.ngay.nam << endl;

    return 0;
}
