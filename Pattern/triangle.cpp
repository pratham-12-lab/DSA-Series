#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int j;

    cout << "enter the n" << endl;
    cin>>n;

    cout << "the Pattern" << endl;
    
    for(i = 0;i < n;i++){
        for(j = 1;j <= i + 1;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}