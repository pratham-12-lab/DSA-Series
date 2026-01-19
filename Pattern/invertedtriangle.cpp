#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)  // rows
    {
        // print leading spaces
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }

        // print numbers (same digit repeated)
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }

        cout << endl;
    }

    return 0;
}