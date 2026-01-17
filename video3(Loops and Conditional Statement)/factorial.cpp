#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;
    int i = 1;

    cout << "enter the n:";
    cin >> n;

    while(i <= n){
        factorial = factorial * i;
        i++;
    }
    cout << "the Factorial" << n << " of is:" << factorial << endl;
    return 0;
}