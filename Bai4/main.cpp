#include <iostream>
#include "Thoigian.h"
using namespace std;

int main()
{
    Thoigian a;
    a.Nhap();
    cout << "- Thoi gian hien tai:\t\t"; a.Xuat();
    cout << endl;
    a.TinhCongThemMotGiay();
    cout << "- Thoi gian sau khi tang 1s:\t"; a.Xuat();
    cout << endl;
    return 0;
}
