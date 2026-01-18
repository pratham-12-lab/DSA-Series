#include <iostream>
using namespace std;

int sumofnumber(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i; // formula n * (n + 1) / 2
    }

    return sum;
}

int main()
{
    cout << sumofnumber(5) << endl;
    return 0;
}