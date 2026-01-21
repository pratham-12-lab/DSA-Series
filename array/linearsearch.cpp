#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {2, 6, 7, 9, 10, 5, 9 , 10};
    int target;
    int index = -1;

    cout << "the value of target is" << endl;
    cin >> target;

    for(int i = 0;i < 7;i++){
        if(target == arr[i]){
            index = i;
            break;
        }
    }

    if(index != -1){
        cout << "the target value is=" << target << "found at index:" << index << endl;
    }else{
        cout << "the target not found" << endl;
    }

   
    return 0;
}