#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter an number of Row : ";
    cin >> row;
    // int column;
    // cout << "Enter an Number of Column : ";
    // cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}