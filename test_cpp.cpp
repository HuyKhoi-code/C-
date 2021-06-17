#include <iostream>

using namespace std;

int main (){
    cout << "1:jan \n2:feb \n3:mar \n4:apr \n5:may \n6:jun \n7:jul \n8:aug \n9:sep \n10:oct \n11:nov \n12:dec";
    cout << "\ngimme the month: ";

    int month;
    cin >> month; 

    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;
        case 2:
            cout << "28 days";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;
        default:
            cout << "dit me may";
            break;
    }
    
    return 0;
}