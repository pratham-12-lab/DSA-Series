#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 1, 2, 2, 3, 3, 4};
    int size = 7;

    int unique_num = 0;

    for (int i = 0; i < size; i++)
    {
        unique_num = unique_num ^ array[i];
    }

    cout << "the unique number=" << unique_num << endl;

    return 0;
}