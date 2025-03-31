#ifndef PHANSO_H_INCLUDED
#define PHANSO_H_INCLUDED
#include <iostream>
using namespace std;
class Phanso{
private:
    int iTu,iMau;
public:
    void Nhap();
    void Xuat();
    void RutGon();
    Phanso Tong(const Phanso&);
    Phanso Hieu(const Phanso&);
    Phanso Tich(const Phanso&);
    Phanso Thuong(const Phanso&);
    void SoSanh(const Phanso&);
};
#endif // PHANSO_H_INCLUDED
