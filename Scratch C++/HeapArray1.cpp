#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    cout << "Enter Array Element : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    cout << "Array Elements Are :- " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i];
    }
    return 0;
};