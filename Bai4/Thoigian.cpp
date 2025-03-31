#include "Thoigian.h"

void Thoigian::Nhap(){
    cout << "Moi ban nhap vao gio phut giay: ";
    cin >> iGio >> iPhut >> iGiay;
    while (1){
        bool check = true;
        if (iGiay < 0 || iGiay > 59) check = false;
        if (iPhut < 0 || iPhut > 59) check = false;
        if (iGio < 0 || iGio > 23) check = false;
        if (check == true) break;
        cout << "Moi ban nhap lai: ";
        cin >> iGio >> iPhut >> iGiay;
    }
}
void Thoigian::Xuat(){
    cout << iGio << ":" << iPhut << ":" << iGiay;
}
void Thoigian::TinhCongThemMotGiay(){
    iGiay++;
    if (iGiay > 59){
        iGiay = 0;
        iPhut++;
    }
    if (iPhut > 59){
        iPhut = 0;
        iGio++;
    }
    if (iGio > 23){
        iGio = 0;
    }
}
