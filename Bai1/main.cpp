#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main()
{
    NgayThangNam a;
    a.Nhap();
    cout << "=================================\n";
    cout << "Ngay vua nhap la:\t"; a.Xuat();
    cout << endl;
    a.NgayThangNamTiepTheo();
    cout << "Ngay tiep theo la:\t"; a.Xuat();
    cout << endl;
    return 0;
}
