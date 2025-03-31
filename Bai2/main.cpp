#include <iostream>
#include "Phanso.h"
using namespace std;

int main()
{
    Phanso a,b,c;
    a.Nhap();
    b.Nhap();
    a.SoSanh(b);
    cout << endl;
    c = a.Tong(b);
    cout << "Tong: "; c.Xuat();
    cout << endl;
    c = a.Hieu(b);
    cout << "Hieu: "; c.Xuat();
    cout << endl;
    c = a.Tich(b);
    cout << "Tich: "; c.Xuat();
    cout << endl;
    c = a.Thuong(b);
    cout << "Thuong: "; c.Xuat();
    cout << endl;
    return 0;
}
