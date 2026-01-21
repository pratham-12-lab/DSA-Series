#include <iostream>
using namespace std;

int main()
{
    int array[10] = {10 , 20, 30 , 40 , 50 , 60 , 70 , 80 , 90};
    int largest = array[0];

    for(int i = 1; i < 10;i++){
        if(largest < array[i]){
            largest =  array[i];
        }
    }
     cout << "the largest number=" << largest << endl;
    return 0;
}