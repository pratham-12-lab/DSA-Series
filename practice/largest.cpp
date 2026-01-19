#include <iostream>
using namespace std;

void largestnumber(int num){
    int largest = 0;
    int digit;

    while(num > 0){
        digit = num % 10;
        if(digit > largest){
            largest = digit;
        }
        num = num / 10;
    }
    cout << "the Largest Number" << largest;
}
    

int main()
{
   largestnumber(5832);
    return 0;
}