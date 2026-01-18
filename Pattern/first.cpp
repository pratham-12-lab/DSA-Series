#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int j = 1;

    cout << "enter the n:" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}