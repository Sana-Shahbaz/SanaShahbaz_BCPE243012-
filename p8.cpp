#include<iostream>
using namespace std;
int main()
{
 int leapyear;
 cout << "enter the leap year = \t";
 cin >> leapyear;
 if (leapyear % 4 == 0)
 {
 cout << "it is a leap year" << endl;
 }
 else
 {
 cout << "it is not a leap year" << endl;
 }

 return 0;
}