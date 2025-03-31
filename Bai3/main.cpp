#include <iostream>
#include "Sophuc.h"
using namespace std;

int main()
{
    Sophuc a,b,c;
    a.Nhap();
    b.Nhap();
    a.Xuat();
    cout << endl;
    b.Xuat();
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
    cout << "Thoung: "; c.Xuat();
    cout << endl;
    return 0;
}
