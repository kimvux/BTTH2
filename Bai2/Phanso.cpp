#include "Phanso.h"


void Phanso::Nhap(){
    cout << "Moi ban nhap phan so: ";
    cin >> iTu >> iMau;
    while (iMau == 0){
        cout << "Moi ban nhap lai: ";
        cin >> iTu >> iMau;
    }
}
void Phanso::Xuat(){
    if (iTu == 0)
        cout << 0;
    else if (iMau == -1)
        cout << -iTu;
    else if (iMau == 1)
        cout << iTu;
    else if (iMau < 0)
        cout << -iTu << "/" << -iMau;
    else
        cout << iTu << "/" << iMau;
}
void Phanso::RutGon(){
    if (iTu == 0) return;
    int x = abs(iTu);
    int y = abs(iMau);
    while (x != y){
        if (x > y) x -= y;
        else y -= x;
    }
    iTu /= x;
    iMau /= x;
}
Phanso Phanso::Tong(const Phanso& a){
    Phanso c;
    c.iTu = this->iTu * a.iMau + this->iMau * a.iTu;
    c.iMau = this->iMau * a.iMau;
    c.RutGon();
    return c;
}
Phanso Phanso::Hieu(const Phanso& a){
    Phanso c;
    c.iTu = this->iTu * a.iMau - this->iMau * a.iTu;
    c.iMau = this->iMau * a.iMau;
    c.RutGon();
    return c;
}
Phanso Phanso::Tich(const Phanso& a){
    Phanso c;
    c.iTu = this->iTu * a.iTu;
    c.iMau = this->iMau * a.iMau;
    c.RutGon();
    return c;
}
Phanso Phanso::Thuong(const Phanso& a){
    Phanso c;
    c.iTu = this->iTu * a.iMau;
    c.iMau = this->iMau * a.iTu;
    c.RutGon();
    return c;
}
void Phanso::SoSanh(const Phanso& a){
    if ( (double)iTu/(double)iMau > (double)a.iTu/(double)a.iMau ){
        cout << "Phan so "; this->Xuat(); cout << " lon hon phan so " << a.iTu << "/" << a.iMau;
    }
    else if ( (double)iTu/(double)iMau < (double)a.iTu/(double)a.iMau){
        cout << "Phan so "; this->Xuat(); cout << " nho hon phan so " << a.iTu << "/" << a.iMau;
    }
    else
        cout << "Hai phan so bang nhau.";
}
