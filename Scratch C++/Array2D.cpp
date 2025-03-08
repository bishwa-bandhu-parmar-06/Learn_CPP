#include <iostream>
using namespace std;
int main()
{
    int rows1;
    cout << "Enter Number of Rows for 1st Array :- " << endl;
    cin >> rows1;

    int cols1;
    cout << "Enter Number of Columns 1st Array  :- " << endl;
    cin >> cols1;

    int rows2;
    cout << "Enter Number of Rows for 2nd  Array :- " << endl;
    cin >> rows2;

    int cols2;
    cout << "Enter Number of Columns 2nd Array  :- " << endl;
    cin >> cols2;

    int matr[rows1][cols2];

    if (cols1 == rows2)
    {
        int arr1[rows1][cols1];
        cout << "Enter Elements for 2nd Arrays of 2D:- " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cin >> arr1[i][j];
            }
        }

        int arr2[rows2][cols2];
        cout << "Enter Elements for 2nd Arrays of 2D:- " << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cin >> arr2[i][j];
            }
        }

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                int sum = 0;
                for (int k = 0; k < cols1; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                matr[i][j] = sum;
            }
        }
        cout << "Elements after successfull multiplication :- " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cout << "  " << matr[i][j] << endl;
            }
        }
    }
    else
    {
        cout << "Multiplication is not Possible.";
    }

    return 0;
}