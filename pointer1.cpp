#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 2;
    cout << ptr[0] << endl;

    delete[] ptr;
    ptr = nullptr;
    return 0;
}