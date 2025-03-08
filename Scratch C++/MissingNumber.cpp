#include <iostream>
using namespace std;

int findingMissingNumber(int arr[], int size)
{
    int totalSum = ((size + 1) * (size + 2)) / 2;
    int arraysum = 0;
    for (int i = 0; i < size; i++)
    {
        arraysum += arr[i];
    }
    int missingNumber = totalSum - arraysum;
    return missingNumber;
};

int main()
{
    // int size;
    // cout << "Enter The Size of An Array : " << endl;
    // cin >> size;
    int size = 7;

    int arr[size] = {1,2,4,5,6,7,8};
    // cout << "Enter the Elements of an Array : " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }

    int result = findingMissingNumber(arr, size);
    cout << "Missing Number is : " << result << endl;
    return 0;
}