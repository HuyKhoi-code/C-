#include <iostream>

using namespace std;

class ThoiGian{
    private:
        int Gio, Phut;
    public:
        void nhap();
        void xuat();
        int Tong(ThoiGian t1, ThoiGian t2){
            this->Phut = t1.Phut + t2.Phut;
            this->Gio = t1.Gio + t2.Gio;
            if (this->Phut > 60){
                this->Gio+=1;
                this->Phut-=60;
            }
            return this->Gio, this->Phut;
        }
};

void ThoiGian::nhap(){
    cout << "nhap thoi gian: ";
    cin >> Gio;
    cin >> Phut;
}

void ThoiGian::xuat(){
    cout << Gio << " " << Phut;
}

int main(){
    ThoiGian t1, t2, t3;
    t1.nhap();
    t2.nhap();
    t3.Tong(t1,t2);
    t3.xuat();
    system ("pause");
    return 0;
}