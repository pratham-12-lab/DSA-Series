#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "size of=" << vec.size() << endl;
    vec.push_back(25);
    cout << "after push=" << vec.size() << endl;
    return 0;
}