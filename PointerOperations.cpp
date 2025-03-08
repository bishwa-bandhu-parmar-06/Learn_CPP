#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;

    // cout << p << endl;     // 0x61fef8
    // cout << p + 2 << endl; // 0x61ff00

    // cout << *p << endl;       // 1
    // cout << *(p + 2) << endl; // 3

    // cout << *p << endl; // 1
    // p++;
    // cout << *p << endl; // 2
    // p--;
    // cout << *p << endl; // 1

    for (int i = 0; i < 5; i++)
    {
        // cout << A[i] << endl;
        // cout << i[A] << endl;
        // cout << *(A + i) << endl;
        cout << A + i << endl;
    }
    return 0;
}