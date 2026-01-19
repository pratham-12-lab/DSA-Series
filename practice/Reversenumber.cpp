#include <iostream>
using namespace std;

void reverse(int num ){
    int digit = 0;
    int rev = 0;

    while(num > 0){
            digit = num % 10;
            num = num / 10;
            rev = rev * 10 + digit;
    }
    cout << rev << endl;
}

int main()
{
    cout << "the reverse of number:" << endl;
    reverse(4321);
    return 0;
}