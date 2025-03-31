#include "Sophuc.h"

void Sophuc::Nhap(){
    cout << "Moi ban nhap so phuc: ";
    cin >> iThuc >> iAo;
}
void Sophuc::Xuat(){
    if (iAo >= 0) cout << iThuc << "+" << iAo << "i";
    else cout << iThuc << iAo << "i";
}
Sophuc Sophuc::Tong(const Sophuc& a){
    Sophuc b;
    b.iThuc = iThuc + a.iThuc;
    b.iAo = iAo + a.iAo;
    return b;
}
Sophuc Sophuc::Hieu(const Sophuc& a){
    Sophuc b;
    b.iThuc = iThuc - a.iThuc;
    b.iAo = iAo - a.iAo;
    return b;
}
Sophuc Sophuc::Tich(const Sophuc& a){
    Sophuc c;
    c.iThuc = iThuc*a.iThuc - iAo*a.iAo;
    c.iAo = iThuc*a.iAo + iAo*a.iThuc;
    return c;
}
Sophuc Sophuc::Thuong(const Sophuc& a){
    Sophuc c;
    c.iThuc = (iThuc*a.iThuc + iAo*a.iAo)/(a.iThuc*a.iThuc + a.iAo*a.iAo);
    c.iAo = (iAo*a.iThuc - iThuc*a.iAo)/(a.iThuc*a.iThuc + a.iAo*a.iAo);
    return c;
}
