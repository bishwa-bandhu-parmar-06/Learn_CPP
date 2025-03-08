#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter A  year to Check Leap Year";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " : Year is Leap Year";
    }
    else if (year % 100 == 0)
    {
        cout << year << " : Year is Leap Year";
    }
    else if (year % 400 == 0)
    {
        cout << year << " : Year is Leap Year";
    }
    else
    {
        cout << year << " : Year is not Leap Year";
    }
    return 0;
}