#include <iostream>
using namespace std;

void reverseanarray(int array[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;

    reverseanarray(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << "the array=" << array[i] << endl;
    }
    return 0;
}