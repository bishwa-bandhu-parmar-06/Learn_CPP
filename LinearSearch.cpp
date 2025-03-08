// Write a program for linear Search using functions.

#include <iostream>
using namespace std;

int linearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    cout << "Search a Number from 1 to 9 : ";
    cin >> key;
    int index = linearSearch(A, 9, key);
    cout << "Number is found at index : " << index;
}