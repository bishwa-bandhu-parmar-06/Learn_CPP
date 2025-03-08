#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter an Array Size :- " << endl;
    cin >> size;
    cout << "Entered  Array Size is :- " << size << endl;

    int *p;
    p = new int[size];
    cout << "Array is Created for given Size." << endl;
    cout << "Now Enter an array Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }

    int newSize;
    cout << "Now enter the size you want to increase :- " << endl;
    cin >> newSize;

    int *q;
    q = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        q[i] = p[i];
    }

    delete []p;
    p = q;
    q = NULL;


    for (int i = 0; i < newSize; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
};