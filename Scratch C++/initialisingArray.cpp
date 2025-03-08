#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter Array data for size of 10 elements : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing the element of an Array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}