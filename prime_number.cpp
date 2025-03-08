#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter The number to find it is prime or not:";
    cin >> number;
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "The Provided Number is Prime Number";
    }
    else
    {
        cout << "The Provided Number is not Prime Number";
    }
    return 0;
};