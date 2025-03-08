// Finding the element from an array
#include <iostream>
using namespace std;
int main()
{
    int key, n;
    cout << "Enter an Number of Element:";
    cin >> n;
    int arr[n];
    cout << "Enter a Element of an array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter an Element to Search in an Array:";
    cin >> key;

    cout << "Checking the Number's Existances: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "Number Find on the Index : " << i;
            return 0;
        }
    }
    cout << "Number not found in an Array";
}
