#include <iostream>
using namespace std;

int chargex(int x)
{
    x = 2 * x;
    cout << "x:" << x << endl;
}
int main()
{
    int x = 5;
    chargex(x);
    cout << "x:" << x << endl;
    return 0;
}