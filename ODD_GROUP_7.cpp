#include <iostream>
using namespace std;

int main() 
{
    double dNum1, dNum2, dNum3, dNum4, dNum5;
    double ave;

    cout << "Enter grade(1): ";
    cin >> dNum1;
    cout << "Enter grade(2): ";
    cin >> dNum2;
    cout << "Enter grade(3): ";
    cin >> dNum3;
    cout << "Enter grade(4): ";
    cin >> dNum4;
    cout << "Enter grade(5): ";
    cin >> dNum5;

    ave = (dNum1 + dNum2 + dNum3 + dNum4 + dNum5) / 5;
    
    cout<<"Average: "<<ave<<endl;

    if (ave >= 75 && ave <= 85) {
        cout << "Normal Graduate!!!";
    } else if (ave >= 86 && ave <= 93) {
        cout << "With High Honors";
    } else if (ave >= 94 && ave <= 97) {
        cout << "With Highest Honor";
    } else if (ave >= 98 && ave <= 100) {
        cout << "Anak ni Rizal";
    } else {
        cout << "Tornado mo pag-aaral, Insan!";
    }
    return 0;
}