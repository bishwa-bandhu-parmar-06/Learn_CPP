// 9.         Write a C++ program to demonstrate the concept of function overloading.

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b)
{
    return a + b;
}

int main()
{
    // Calling the overloaded functions
    cout << "Sum of 5 and 7: " << add(5, 7) << endl;
    cout << "Sum of 2, 4, and 6: " << add(2, 4, 6) << endl;
    cout << "Sum of 3.5 and 2.5: " << add(3.5, 2.5) << endl;

    return 0;
}
