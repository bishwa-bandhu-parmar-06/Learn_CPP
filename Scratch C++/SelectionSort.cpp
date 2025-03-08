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
    int temp = 0;
    for(int i = 0; i< size-1; i++){
        for(int j = i; j< size; j++){
            int min = i;
            if (arr[j ] < arr[i])
            {
                min = j;
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp; 
        }
    }

    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = 0; j < size - i + 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    cout << "Sorted Elements are :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << endl;
    }
    return 0;
}