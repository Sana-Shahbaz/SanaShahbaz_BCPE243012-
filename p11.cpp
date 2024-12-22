 //////////////////  Nested If Statement  //////////////////

#include <iostream>
using namespace std;
int main() {
 int num;
 bool isPrime = true;
 cout << "Enter a number: ";
 cin >> num;
 for (int i = 2; i <= num / 2; i++) {
 if (num % i == 0) {
 isPrime = false;
 break;
 }
 }
 if (isPrime){
cout << "Prime number"<<endl;
 }
 else{
 cout << "Not prime number"<<endl;

 }


 return 0;
}