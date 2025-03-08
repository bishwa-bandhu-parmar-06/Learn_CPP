// search an element from an array
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    int n = 9;
    cout << "Enter a Key To Search :";
    cin >> key;
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            cout << key << " : is found on the index : " << mid;
            return 0;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Key Not Found";
}