#include "NgayThangNam.h"
void NgayThangNam::Nhap(){
    cout << "Nhap vao ngay thang nam: ";
    cin >> iNgay >> iThang >> iNam;
    while(1){
        bool check = true;
        if (iNgay < 1 || iNgay > 31) check = false;
        if (iThang < 1 || iThang > 12) check = false;

        bool namnhuan = false;
        if (iNam % 400 == 0) namnhuan = true;
        else if (iNam % 4 == 0 && iNam % 100 != 0) namnhuan = true;

        if (iThang == 2 && namnhuan == true){
            if (iNgay > 29) check = false;
        }
        if (iThang == 2 && namnhuan == false){
            if (iNgay > 28) check = false;
        }
        if (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12){
            if (iNgay > 31) check = false;
        }
        else {
            if (iNgay > 30) check = false;
        }

        if (check == true) break;
        cout << "Moi ban nhap lai: ";
        cin >> iNgay >> iThang >> iNam;
    }
}
void NgayThangNam::Xuat(){
    cout << iNgay << "/" << iThang << "/" << iNam;
}
void NgayThangNam::NgayThangNamTiepTheo(){
    iNgay++;
    bool namnhuan = false;
    if (iNam % 400 == 0) namnhuan = true;
    else if (iNam % 4 == 0 && iNam % 100 != 0) namnhuan = true;
    if (iThang == 2 && namnhuan == true){
        if (iNgay > 29){
            iNgay = 1;
            iThang = 3;
        }
    }
    if (iThang == 2 && namnhuan == false){
        if (iNgay > 28){
            iNgay = 1;
            iThang = 3;
        }
    }
    if (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12)
        if (iNgay > 31){
            iNgay = 1;
            iThang++;
        }
    if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
        if (iNgay > 30){
            iNgay = 1;
            iThang++;
        }
    if (iThang > 12){
        iThang = 1;
        iNam++;
    }
}
