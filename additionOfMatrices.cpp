#include <iostream>
using namespace std;
int main()
{
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[2][3] = {{2, 4, 5}, {6, 7, 8}};
    int add[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << add[i][j] << " ";
        }
        cout << endl;
    }
}