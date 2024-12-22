#include <iostream>
using namespace std;
int main() {
 int cookingTime;
 cout << "Enter cooking time (minutes): ";
 cin >> cookingTime;
 if (cookingTime > 0) {
 int i = 1;
 if (i <= cookingTime) {
 cout << "Time elapsed: " << i << " minutes" << endl;
 i++;
 if (i <= cookingTime)
 {
 if (cookingTime == 1) {
 }
 else if (cookingTime == 2) {
 cout << "Time elapsed: " << i << " minutes" << endl;
 }
 else if (cookingTime == 3) {
 cout << "Time elapsed: " << i << " minutes" << endl;
 i++;
cout << "Time elapsed: " << i << " minutes" << endl;
 }
 }
 }
 cout << "Cooking complete!" << endl;
 }
 else {
 cout << "Invalid cooking time. Please enter a positive value." << endl;
 }

 return 0;
}