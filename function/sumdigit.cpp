#include <iostream>
using namespace std;

int digitsum(int num){
    int sum = 0;
     
    for(int i = 0;i <= sum;i++){
        int lastdigit = num % 10;
        num = num / 10;
        sum = sum + lastdigit;
    }
    return sum;
}

int main()
{
    cout << "the Value:" << digitsum(145) << endl;
    return 0;
}