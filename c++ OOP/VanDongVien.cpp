#include <iostream>
#include <string>

using namespace std;

class VDV{
    protected:
        string hoten, monthidau;
        int tuoi;
        float cannang, chieucao;
    public:
        VDV(){
            this->hoten = this->monthidau = "";
            this->tuoi = 0;
            this->cannang = this->chieucao = 0;
        }
        VDV(string ten, string mon, int tuoi, float nang, float cao ){
            this->hoten = ten;
            this->monthidau = mon;
            this->tuoi = tuoi;
            this->cannang = nang;
            this->chieucao = cao;
        }
        ~VDV(){
            this->hoten = this->monthidau = "";
            this->tuoi = 0;
            this->cannang = this->chieucao = 0;
        }

        friend istream &operator>> (istream &is, VDV &a){
            fflush (stdin);
            cout << "nhap ho ten van dong vien: ";
            getline (is, a.hoten);

            fflush (stdin);
            cout << "nhap mon thi dau: ";
            getline (is, a.monthidau);

            cout << "nhap tuoi van dong vien: ";
            is >> a.tuoi;

            cout << "nhap can nang: ";
            is >> a.cannang;

            cout << "nhap chieu cao: ";
            is >> a.chieucao;

            return is;
        }

        friend ostream &operator<< (ostream &os, VDV &a){
            cout << "\n______________________________________";
            cout << "\nho va ten: " << a.hoten;
            cout << "\nmon thi dau: " << a.monthidau;
            cout << "\ntuoi: " << a.tuoi;
            cout << "\ncan nang: " << a.cannang;
            cout << "\nchieu cao: " << a.chieucao;
            return os;
        }

        bool operator> (VDV a){
            if (this->chieucao > a.chieucao)
                return true;
            if (this->chieucao < a.chieucao)
                return false;
            else{
                if (this->cannang > a.chieucao)
                    return true;
                else
                    return false;
            }
        }
};

int main (){
    VDV a, b;
    cin >> a;
    cin >> b;
    if (a > b == true){
        cout << a;
        cout << b;
    }
    else{
        cout << b;
        cout << a;
    }
    system ("pause");
    return 0;
}