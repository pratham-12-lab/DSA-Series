#include <iostream>
using namespace std;

int main(){
   //Arithemetic Operator

   int a , b;

   cout << "enter the Value for a:" << endl;
   cin >> a;

   cout << "enter the value for b:" << endl;
   cin >> b;

    int sum = a + b;
   int diffference = a - b;
   int multiplication = a * b;
   int division = a / b;

   cout << "the Addition of Two Numbers:" << sum << endl;
   cout << "the Substraction of two Numbers" << diffference << endl;
   cout << "the Multiplication of Two Numbers:" << multiplication << endl;
   cout << "the Division of Two Numbers:" << division << endl;
return 0;
}