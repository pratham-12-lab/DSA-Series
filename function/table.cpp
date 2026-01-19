#include <iostream>
using namespace std;

void tablenum(int num){
    for(int i = 1; i <= 10;i++){
       cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main()
{
    cout << "the Tables:" << endl;
    tablenum(2);
    return 0;
}