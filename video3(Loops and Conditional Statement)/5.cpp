#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i = 1;

    cout << "enter the n:" << endl;
    cin >> n;

    while(i <= n){
        if(i%3==0){
            sum = sum + 1;
        }
        i++;
    }
    cout << "the Sum:" << sum;
    return 0;
}