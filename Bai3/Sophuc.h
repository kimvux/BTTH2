#ifndef SOPHUC_H_INCLUDED
#define SOPHUC_H_INCLUDED
#include <iostream>
using namespace std;
class Sophuc {
private:
    double iThuc,iAo;
public:
    void Nhap();
    void Xuat();
    Sophuc Tong(const Sophuc&);
    Sophuc Hieu(const Sophuc&);
    Sophuc Tich(const Sophuc&);
    Sophuc Thuong(const Sophuc&);
};


#endif // SOPHUC_H_INCLUDED
