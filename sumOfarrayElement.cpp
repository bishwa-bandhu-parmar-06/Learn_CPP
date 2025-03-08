#include <iostream>
using namespace std;
int main()
{
    int A[9] = {4, 8, 8, 9, 6, 9, 5, 2, 7};
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum += A[i];
    }
    cout << "Sum of array elements is: " << sum << endl;
    return 0;
}