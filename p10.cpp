#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout << "Enter the character = ";
 cin >> ch;
 if (ch < 'b')
 {
 cout << "it is a uppercase letter" << endl;
 }
 else {
 cout << "it is not uppercase letter" << endl;
 }

 return 0;
}