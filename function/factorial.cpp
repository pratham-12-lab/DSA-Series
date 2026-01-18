#include <iostream>
using namespace std;

int factorialnum(int n){
    int factorial = 1;

    for(int i = 1; i <= n;i++){
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{
    cout << "the Factorial:" << factorialnum(5) << endl;
    return 0;
}