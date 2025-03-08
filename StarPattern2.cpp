#include <iostream>
using namespace std;
int main()
{
    int row = 4;
    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
}