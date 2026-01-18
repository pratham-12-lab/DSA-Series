#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int j;

    cout << "enter the number:" << endl;
    cin >> n;

    cout << "the Pattern:" << endl;

    for (i = 0; i <= n;i++){
        int num = 1;
        for(j = 1 ; j < i + 1;j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}