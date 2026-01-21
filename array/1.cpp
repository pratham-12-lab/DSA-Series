#include <iostream>
using namespace std;

int main()
{
    int mark[5] = {90 , 20 , 100 , 50 , 60};
    int size = 5;

    cout << "the first elemnt:" << mark[0] << endl;;

    for(int i = 0;i < size;i++){
        cout << "the array using loop:" <<  mark[i];
        cout << endl;
    }
    
    return 0;
}