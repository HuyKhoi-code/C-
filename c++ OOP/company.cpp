#include <iostream>
#include <string>

using namespace std;
 
class Company{
    private:
        string tenCT, diachi;
    public:
        void nhap(){
            fflush (stdin);
            cout << "nhap ten cong ty: ";
            getline(cin, tenCT);

            fflush (stdin);
            cout << "nhap dia chi cong ty: ";
            getline(cin, diachi);
        }
        void xuat(){
            cout << "\n-----------------------------------------------------";
            cout << "\nTen cong ty: " << tenCT;
            cout << "\ndia chi cong ty: " << diachi;
        }
};

class NhanVien : public Company{
    private:
        string tenNV, que, gioitinh;
        int tuoi;
    public:
        void nhap(){
            Company :: nhap();
            fflush (stdin);
            cout << "nhap ten nhan vien: ";
            getline(cin, tenNV);

            fflush (stdin);
            cout << "nhap que quan: ";
            getline(cin, que);

            fflush (stdin);
            cout << "nhap gioi tinh: ";
            getline(cin, gioitinh);

            cout << "nhap tuoi nhan vien: ";
            cin >> tuoi;
        }
        void xuat(){
            Company :: xuat();
            cout << "\nten nhan vien: " << tenNV;
            cout << "\nque quan: " << que;
            cout << "\ngioi tinh: " << gioitinh;
            cout << "\ntuoi nhan vien: " << tuoi;
        }
};

int main(){
    NhanVien a, b;
    a.nhap();
    b.nhap();
    a.xuat();
    b.xuat();
    system ("pause");
    return 0;
}