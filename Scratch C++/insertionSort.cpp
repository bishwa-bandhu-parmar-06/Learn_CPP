#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of an Array :-" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter Elements of an array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
    cout << " Elements after insertion  :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << endl;
    }
    return 0;
}