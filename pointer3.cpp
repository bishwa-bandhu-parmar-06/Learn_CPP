#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The NUmber of Elements : ";
    cin >> size;
    int *A = new int[size];
    cout << sizeof A << endl;

    cout << "Enter New Size : ";
    cin >> size;
    delete[] A;
    A = new int[size];
}