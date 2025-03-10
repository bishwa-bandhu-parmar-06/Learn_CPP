#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int num)
{
    return num * num;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Calling the inline function
    int result = square(number);

    cout << "Square of " << number << " is: " << result << endl;

    return 0;
}
