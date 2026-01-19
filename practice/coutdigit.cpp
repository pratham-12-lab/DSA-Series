#include <iostream>
using namespace std;

void coutingthedigit(int num){
    int count = 0;

    while(num > 0){
        num = num / 10;
        count++;
    }
    cout << "the count:" << count;
}

int main()
{
    coutingthedigit(98765);
    return 0;
}