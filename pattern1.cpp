#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    int row;
    cout << "Enter an Number of Row : ";
    cin >> row;
    int column;
    cout << "Enter an Number of Column : ";
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}