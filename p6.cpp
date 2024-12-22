          ////////////// if else statement ////////////////
#include<iostream>
using namespace std;
int main()
{
 char character;
 cout << "enter the charater:";
 cin >> character;
 if (character == 'A' || character == 'a' || character == 'E' || character == 'e'
|| character == 'I' || character == 'i' || character == 'O' || character == 'o' ||
character == 'U' || character == 'u')
 {
 cout << "the character is vowel" << endl;
 }
 else
 {
 cout << "the character is not a vowel" << endl;
 }
 return 0;
}