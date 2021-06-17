#include <iostream>
#include <string>

using namespace std;

class SinhVien{
    private: 
        string ten, que;
        int tuoi;
    
    public:
        void nhap();
        void xuat();
};

void SinhVien::nhap(){
    fflush (stdin);
    cout << "nhap ten sinh vien: ";
    getline(cin, ten);

    fflush (stdin);
    cout << "nhap que quan sinh vien: ";
    getline(cin, que);

    fflush (stdin);
    cout << "nhap tuoi: ";
    cin >> tuoi;
}

void SinhVien::xuat(){
    cout << "ho va ten sinh vien: " << ten;
    cout << "\nque quan sinh vien: " << que;
    cout << "\ntuoi sinh vien: " << tuoi;
}
int main(){
    SinhVien sv;
    sv.nhap();
    sv.xuat();
    system("pause");
    return 0;
}