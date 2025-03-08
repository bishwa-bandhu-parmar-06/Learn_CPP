// largest number in an array
#include <iostream>
using namespace std;

int main()
{
    int A[9] = {4, 8, 8, 9, 6, 9, 5, 2, 7};
    int max = A[0];
    for (int i = 0; i < 9; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "Largest number is: " << max << endl;
    return 0;
}