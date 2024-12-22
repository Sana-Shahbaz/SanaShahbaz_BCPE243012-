#include <iostream>
#include <string>
using namespace std;
int main() {
 string name;
 cout << "Enter your name: ";
 cin >> name;
 if (name == "Kashaf") {
 cout << "Hello, Kashaf! Welcome.";
 }
 else {
 cout << "Hello, " << name << ". Nice to meet you.";
 }

 return 0;
}