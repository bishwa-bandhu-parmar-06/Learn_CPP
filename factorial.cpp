#include <iostream>
using namespace std;

int main()
{
    int fact = 1;
    int num;
    cout << "Enter the Number to find its Factorial:";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
};