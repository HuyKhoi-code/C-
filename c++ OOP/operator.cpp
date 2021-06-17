#include <iostream>

using namespace std;

class PhanSo{
    private:
        int tu, mau;
    public:
        PhanSo(){
            tu = mau = 0;
        }
        ~PhanSo(){
            tu = mau = 0;
        }
        friend istream &operator>>(istream &is, PhanSo &a){
            cout << "nhap tu so: ";
            is >> a.tu;
            cout << "nhap mau so: ";
            is >> a.mau;
            return is;
        }
        friend ostream &operator<<(ostream &os, PhanSo &a){
            os << a.tu << "/" << a.mau << endl;
            return os;
        }
        PhanSo operator+(PhanSo a){
            PhanSo b;
            b.tu = this->tu * a.mau + this->mau * a.tu;
            b.mau = this->mau * a.mau;
            return b;
        }
        void RutGon (){
            if (tu > mau){
                for (int i = 1; i<=mau; i++){
                    if (tu % i == 0 && mau % i == 0){
                        tu /= i;
                        mau /= i;
                    }
                }   
            }
            if (mau > tu){
                for (int i = 1; i<=tu; i++){
                    if (tu % i == 0 && mau % i == 0){
                        tu /= i;
                        mau /= i;
                    }
                }
            }
        }
};
int main (){
    PhanSo a, b, c;
    cin >> a;
    cin >> b;
    a.RutGon();
    cout << a;
    cout << b;
    c = a + b;
    c.RutGon();
    cout << c;
    system ("pause");
    return 0;
}
