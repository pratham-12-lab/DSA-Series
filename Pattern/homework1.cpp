#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int j;
    char ch = 'A';

    cout << "enter the n:" << endl;
    cin >> n;

    cout << "the Character:" << endl;

    for(i = 1;i <= n;i++){
        for(j = 1;j<=n;j++){
            cout << ch;
            ch++;
        }
        
        cout << endl;
    }
    return 0;
}