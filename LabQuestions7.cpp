// Write a C++ program to implement various operator.
//                (a) new, delete    (b) scope resolution operator   (c) manipulator
#include <iostream>
#include <iomanip> // Required for manipulators
using namespace std;
// Declare the global variable x
int x = 10;

// Operator Overloading Example
class MyArray
{
private:
    int *arr;
    int size;

public:
    MyArray(int s) : size(s)
    {
        arr = new int[size];
    }

    // Overloading the new operator for dynamic memory allocation
    void *operator new(size_t size)
    {
        cout << "Custom new operator called" << endl;
        return ::new char[size];
    }

    // Overloading the delete operator for dynamic memory deallocation
    void operator delete(void *p)
    {
        cout << "Custom delete operator called" << endl;
        ::delete[] p;
    }

    int &operator[](int index)
    {
        return arr[index];
    }

    ~MyArray()
    {
        delete[] arr;
    }
};

int main()
{
    // (a) Using new and delete operators
    MyArray *arrayObj = new MyArray(5);
    for (int i = 0; i < 5; ++i)
    {
        (*arrayObj)[i] = i * 2;
    }

    cout << "Array elements using new and delete operators: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << (*arrayObj)[i] << " ";
    }
    cout << endl;

    delete arrayObj;

    // (b) Using scope resolution operator
    cout << "Using scope resolution operator to access global variable: ";
    // int x = 10;
    cout << ::x << endl;

    // (c) Using manipulator - setw
    int a = 12345, b = 6789;
    cout << "Using setw manipulator to format output:" << endl;
    cout << setw(10) << "Number1" << setw(10) << "Number2" << endl;
    cout << setw(10) << a << setw(10) << b << endl;

    return 0;
}
