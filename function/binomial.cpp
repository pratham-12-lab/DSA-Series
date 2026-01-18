#include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int coeff(int n, int r)
{
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_nr = factorial(n - r);
    return factorial_n / (factorial_r * factorial_nr);
}

int main()
{
    int n = 8;
    int r = 2;
    cout << coeff(n, r) << endl;
    return 0;
}