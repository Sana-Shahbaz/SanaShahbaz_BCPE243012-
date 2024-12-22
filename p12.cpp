#include <iostream>
using namespace std;
int main() {
 string color;
 cout << "Enter a color (red, green, blue, yellow, purple): ";
 cin >> color;
 if (color == "red") {
 cout << "You entered the color of an apple.";
 }
 else if (color == "green") {
 cout << "You entered the color of grass.";
 }
 else if (color == "blue") {
 cout << "You entered the color of the sky.";
 }
 else if (color == "yellow") {
 cout << "You entered the color of the sun.";
 }
 else if (color == "purple") { cout << "You entered the color of grapes."; }
 else {
 cout << "Unknown color.";
 }

 return 0;
}