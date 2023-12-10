#include<iostream>
using namespace std;
int main()
{
int Choice;
cout<<"Enter a number between (10-20):";cin>> Choice;
cout<<endl; 
switch(Choice){
    case 11:
    cout<<"XI";
    break;
    case 12:
    cout<<"XII";
    break;
    case 13:
    cout<<"XIII";
    break;
    case 14:
    cout<<"XIV";
    break;
    case 15:
    cout<<"XV";
    break;
    case 16:
    cout<<"XVI";
    break;
    case 17:
    cout<<"XVII";
    break;
    case 18:
    cout<<"XVIII";
    break;
    case 19:
    cout<<"XIV";
    break;
    case 20:
    cout<<"XX";
    break;
    default:
    cout<< "Invalid Input...Number out of range";
    break;
}
    return 0;
}
