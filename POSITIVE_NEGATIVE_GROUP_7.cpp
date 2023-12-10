#include<iostream>
using namespace std;
int main ()
{
   double number;
   
   cout<<"Input a number:"; cin>>number;
  
   if (number > 0)
   {cout<<"the number is positive";}
   else if (number < 0)
   {cout<<"the number is negative";}
   else if (number == 0)
   {cout<<"the number is zero";} 
   return 0;
}