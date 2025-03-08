#include <iostream>
using namespace std;
////////////////////////////////using call by value/////////////////////

// Function to swap two values using call by value
int swapfunction(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "The value of a after swapping is: " << x << "\n";
    cout << "The value of b after swapping is: " << y << "\n";
    return 0;
};

int main()
{
    int a;
    int b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "The value of a is: " << a << "\n";
    cout << "The value of b is: " << b << "\n";
    swapfunction(a, b);
    return 0;
}

//////////////////////////////using call by reference/////////////////////
// int swapfunction(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     return 0;
// }
// int main()
// {
//     int a;
//     int b;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     cout << "The value of a is: " << a << "\n";
//     cout << "The value of b is: " << b << "\n";
//     swapfunction(a, b);
//     cout << "The value of a after swapping is: " << a << "\n";
//     cout << "The value of b after swapping is: " << b << "\n";
//     return 0;
// }