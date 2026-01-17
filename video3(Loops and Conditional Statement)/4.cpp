#include <iostream>
using namespace std;

int main() {
    int addsum = 0;
    int n;
    int i = 1; 

    cin >> n;
    cout << "the N: " << n << endl;

    while(i <= n) {
        if(i % 2 != 0) {  
            addsum = addsum + i;
        }
        i++;
        cout << "Sum of odd numbers up to " << n << " = " << addsum << endl;
    }
    return 0;
}